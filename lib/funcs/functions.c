#include "../../include/funcs.h"
#include "../../include/main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

// create a new buffer and return the bufaddress
unsigned char* _0(unsigned char* str) {
	int bufferNum = -1;
	for(int i = 0; i < 256; i++) {
		if (bufferList[i] == NULL) {
			bufferNum = i;
			break;
		}
	}
	if (bufferNum == -1) {
		unsigned char* output = malloc(2);
		output[0] = 1;
		output[1] = 0;
		return output;
	}
	unsigned char* buffer = calloc(str[0], 1);

	if(buffer == NULL) {
		unsigned char* output = malloc(2);
		output[0] = 2;
		output[1] = 0;
		return output;
	}

	bufferList[bufferNum] = buffer;
	unsigned char* output = malloc(3);
	output[0] = 0;
	output[1] = bufferNum;
	output[2] = 0;
    return NULL;
}
// destroy a buffer or return a code if it could not be destroyed
unsigned char* _1(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
// read a file to output
unsigned char* _2(unsigned char* str) {
	FILE* fptr = fopen((char*)str, "r");
	if(fptr == NULL) {
		return malloc(0);
	}
	struct stat st;
	fstat(fileno(fptr), &st);
	off_t size = st.st_size;
	char* newstr = malloc(size);
	fread(newstr, size, 1, fptr);
	fclose(fptr);
    return (unsigned char*)newstr;
}
unsigned char* _3(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _4(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _5(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _6(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _7(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _8(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _9(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _10(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _11(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _12(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _13(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _14(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _15(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _16(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _17(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _18(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _19(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _20(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _21(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _22(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _23(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _24(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _25(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _26(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _27(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _28(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _29(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _30(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _31(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _32(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _33(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _34(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _35(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _36(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _37(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _38(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _39(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _40(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _41(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _42(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _43(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _44(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _45(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _46(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _47(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _48(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _49(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _50(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _51(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _52(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _53(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _54(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _55(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _56(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _57(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _58(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _59(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _60(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _61(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _62(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _63(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _64(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _65(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _66(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _67(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _68(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _69(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _70(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _71(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _72(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _73(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _74(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _75(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _76(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _77(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _78(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _79(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _80(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _81(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _82(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _83(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _84(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _85(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _86(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _87(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _88(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _89(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _90(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _91(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _92(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _93(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _94(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _95(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _96(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _97(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _98(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _99(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _100(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _101(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _102(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _103(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _104(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _105(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _106(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _107(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _108(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _109(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _110(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _111(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _112(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _113(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _114(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _115(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _116(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _117(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _118(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _119(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _120(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _121(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _122(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _123(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _124(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _125(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _126(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _127(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _128(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _129(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _130(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _131(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _132(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _133(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _134(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _135(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _136(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _137(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _138(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _139(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _140(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _141(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _142(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _143(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _144(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _145(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _146(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _147(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _148(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _149(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _150(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _151(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _152(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _153(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _154(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _155(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _156(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _157(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _158(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _159(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _160(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _161(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _162(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _163(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _164(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _165(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _166(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _167(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _168(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _169(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _170(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _171(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _172(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _173(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _174(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _175(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _176(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _177(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _178(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _179(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _180(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _181(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _182(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _183(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _184(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _185(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _186(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _187(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _188(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _189(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _190(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _191(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _192(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _193(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _194(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _195(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _196(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _197(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _198(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _199(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _200(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _201(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _202(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _203(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _204(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _205(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _206(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _207(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _208(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _209(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _210(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _211(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _212(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _213(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _214(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _215(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _216(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _217(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _218(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _219(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _220(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _221(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _222(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _223(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _224(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _225(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _226(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _227(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _228(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _229(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _230(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _231(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _232(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _233(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _234(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _235(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _236(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _237(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _238(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _239(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _240(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _241(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _242(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _243(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _244(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _245(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _246(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _247(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _248(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _249(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _250(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _251(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _252(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _253(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _254(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
unsigned char* _255(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}
