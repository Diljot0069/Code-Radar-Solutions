#include <stdio.h>

int main() {
    float a,b,c,d;
    scanf(" %f",&a);
    scanf(" %f",&b);
    scanf(" %f",&c);
    d = a + b + c;
    printf("Average: %.2f",d/3);
    return 0;
}