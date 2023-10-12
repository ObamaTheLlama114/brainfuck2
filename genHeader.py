fmt = "unsigned char* _{n}(unsigned char* str);"
print("#ifndef FUNCS_H\n#define FUNCS_H\n")
for i in range(256):
    print(fmt.format(n=i))
print("#endif")
