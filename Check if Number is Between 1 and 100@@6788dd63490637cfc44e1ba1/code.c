#include <stdio.h>

int main() {
    int a;
    scanf("&d",&a);
    if( a >= 1 && a <= 100){
        printf("In Range");
    }else if( a > 100){
        printf("Out of Range");
    }
    return 0;
}