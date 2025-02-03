#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if( a >= 65){
        printf("Eligible");
    }else if(a< 65){
        printf("Not Eligible");
    }
    return 0;
}