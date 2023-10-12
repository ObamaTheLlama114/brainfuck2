print("""#include "../include/funcs.h"

typedef char* (*callfunc)(char*);

callfunc getFuncFromInt(unsigned char n) {
	switch(n) {""")

for i in range(256):
    print("	    case {n}: return _{n};".format(n=i))
print("	} return 0;\n}")
