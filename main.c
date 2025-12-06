#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argvI[]) {
    int a = 13;
    int b = 10;
    printf("Simple Calculator\n");
    printf("a + b = %d\n", add_funct(a,b));
    printf("a - b = %d\n", sub_funct(a,b));
    printf("a * b = %d\n", mul_funct(a,b));
    printf("a / b=%dn", div_funct(a,b));
    return 0;
}
