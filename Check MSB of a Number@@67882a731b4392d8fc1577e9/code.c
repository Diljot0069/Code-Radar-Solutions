#include <stdio.h>

int main() {
    int a, b = 1;
    scanf("%d",&a);
    int result =  ( a >> 31) & b;

    if( result == 0){
        printf("Not Set");
    }else{
        printf("Set");
    }
    return 0;
}