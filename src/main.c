#include "../include/funcs.h"
#include "../include/main.h"
#include "getFuncFromInt.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <termios.h>

uint8_t* bufferList[256] = {0};
uintptr_t bufferIndecies[256];

static inline char getch() {
        char buf = 0;
        struct termios old = {0};
        if (tcgetattr(0, &old) < 0)
                perror("tcsetattr()");
        old.c_lflag &= ~ICANON;
        old.c_lflag &= ~ECHO;
        old.c_cc[VMIN] = 1;
        old.c_cc[VTIME] = 0;
        if (tcsetattr(0, TCSANOW, &old) < 0)
                perror("tcsetattr ICANON");
        if (read(0, &buf, 1) < 0)
                perror ("read()");
        old.c_lflag |= ICANON;
        old.c_lflag |= ECHO;
        if (tcsetattr(0, TCSADRAIN, &old) < 0)
                perror ("tcsetattr ~ICANON");
        return (buf);
}

int main(int argc, char** argv) {
	uintptr_t codeIndex = 0;

	uint8_t* mainBuffer = calloc(3000, sizeof(uint8_t));
	for (int i = 0; i < 256; i++) {
		bufferIndecies[i] = 0;
	}
	uint8_t bufferPtr = 0;
	bufferList[0] = mainBuffer;

	// check for arguments
	if(argc < 2) {
		printf("No input file\n");
		return 1;
	} else if(argc > 2) {
		printf("Too many arguments\n");
		return 2;
	}

	// read brainfuck source file
	FILE* fptr = fopen(argv[1], "r");
	if(fptr == NULL) {
		printf("Cannot open file %s\n", argv[1]);
		return 3;
	}
	struct stat st;
	fstat(fileno(fptr), &st);
	off_t size = st.st_size;
	char* code = malloc(size);
	fread(code, size, 1, fptr);
	fclose(fptr);

	// loop stack
	// TODO: possibly could be optimized to use a bitfield since there are only 2 types of loops
	// ex...
	// loopStack = 01100111 01100000
	// loopStackSize = 12
	// would look like
	// {[[{{[[[{[[{ }]]}]]]}}]]}
	enum loopChoice {
		ZERO = 0, // loop on zero {}
		NONZERO = 1, // loop not on zero []
	};
	struct loop {
		enum loopChoice loopType;
		uintptr_t index;
		uint8_t buffer;
	};
	uintptr_t loopStackSize = 0;
	uintptr_t loopStackMaxSize = 0;
	struct loop* loopStack = calloc(0, sizeof(struct loop));


	while(1) {
		if (codeIndex >= size) {
			break;
		}
		uintptr_t* ptr = bufferIndecies + bufferPtr;
		uint8_t* buffer = bufferList[bufferPtr];
		uint8_t* cell = buffer + *ptr;
		switch (code[codeIndex]) {
			case '+': // add 1 to current cell
				(*cell)++;
				break;
			case '-': // subtract 1 to current cell
				(*cell)--;
				break;
			case '<': // move index for current buffer 1 to the left
				(*ptr)--;
				break;
			case '>': // move index for current buffer 1 to the right
				(*ptr)++;
				break;
			case '/': // move up one buffer
				bufferPtr--;
				break;
			case '\\':// move down one buffer
				bufferPtr++;
				break;
			case '.': // print out the ascii character for the current cell
				printf("%c", *cell);
				fflush(stdout);
				break;
			case ',': // take one character from input and set the current cell to the ascii code to the input
				*cell = getch();
				break;
			case '[': // start a NONZERO loop
				// make sure loopStack has enough space for new loop
				if (loopStackSize == loopStackMaxSize) {
					struct loop* tmp = realloc(loopStack, (loopStackMaxSize + 1) * sizeof(struct loop));
					if (tmp == NULL) {
						printf("Out of memory\n");
						exit(1);
					}
					loopStack = tmp;
					loopStackMaxSize++;
				}

				// add a new item to the top of the stack
				loopStack[loopStackSize].index = codeIndex;
				loopStack[loopStackSize].buffer = bufferPtr;
				loopStack[loopStackSize].loopType = NONZERO;
				loopStackSize++;
				break;
			case ']': // end a NONZERO loop
				// check for the correct type of loop
				if (loopStack[loopStackSize - 1].loopType != NONZERO) {
					printf("Incorrect loop ending at %lu\nwith a stack size of %lu\n", codeIndex, loopStackSize);
					exit(2);
				}
				if (*cell != 0) {
					codeIndex = loopStack[loopStackSize - 1].index;
					bufferPtr = loopStack[loopStackSize - 1].buffer;
				} else {
					loopStackSize--;
				}
				break;
			case '{': // start a ZERO loop
				// make sure loopStack has enough space for new loop
				if (loopStackSize == loopStackMaxSize) {
					struct loop* tmp = realloc(loopStack, (loopStackMaxSize + 1) * sizeof(struct loop));
					if (tmp == NULL) {
						printf("Out of memory\n");
						exit(1);
					}
					loopStack = tmp;
					loopStackMaxSize++;
				}

				// add a new item to the top of the stack
				loopStack[loopStackSize].index = codeIndex;
				loopStack[loopStackSize].buffer = bufferPtr;
				loopStack[loopStackSize].loopType = ZERO;
				loopStackSize++;
				break;
			case '}': // end a ZERO loop
				// check for the correct type of loop
				if (loopStack[loopStackSize - 1].loopType != ZERO) {
					printf("Incorrect loop ending at %lu\nwith a stack size of %lu\n", codeIndex, loopStackSize);
					exit(2);
				}
				if (*cell != 0) {
					codeIndex = loopStack[loopStackSize - 1].index;
					bufferPtr = loopStack[loopStackSize - 1].buffer;
				} else {
					loopStackSize--;
				}
				break;
			case '!': // call a bang function
				{
					uint8_t* newstr = getFuncFromInt(*cell)(cell + 1);
					strcpy((char*)cell + 1, (char*)newstr);
					free(newstr);
					break;
				}
			default: {} // if the character is not a valid character, do nothing
		}
		codeIndex++;
	}
}
