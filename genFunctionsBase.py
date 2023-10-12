print('#include "../../include/funcs.h"')
print('#include "../../include/main.h"')
print('#include <stdlib.h>')
print('#include <string.h>')

for i in range(256):
    print("unsigned char* _" + str(i) + """(unsigned char* str) {
    int len = strlen((char*)str);
    unsigned char* newstr = malloc(len);
    memcpy(newstr, str, len);
    return newstr;
}""")
