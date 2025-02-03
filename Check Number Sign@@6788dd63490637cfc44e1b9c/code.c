#include <stdio.h>

int main() {
    int a;
    scanf("%f",&a);
    if(  a > 0){
        printf("Positive");
    }else if( a == 0){
        printf("Zero");
    }else if( a < 0){
        printf("Negative");
    }
    return 0;
}