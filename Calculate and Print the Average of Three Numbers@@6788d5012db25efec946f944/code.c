#include <stdio.h>

int main() {
    float a,b,c,d;
    scanf(" %.2f",&a);
    scanf(" %.2f",&b);
    scanf(" %.2f",&c);
    d = a + b + c;
    printf("%.2f",d/3);
    return 0;
}