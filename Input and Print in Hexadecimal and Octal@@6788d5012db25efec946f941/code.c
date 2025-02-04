#include <stdio.h>
int main() {
    char a;
    scanf(" %c",&a);
    printf("Hexadecimal: %X\n",a*2);
    printf("Octal: %o\n",a * 2);
    return 0;
}