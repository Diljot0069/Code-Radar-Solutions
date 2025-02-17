#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int result = a >> 1;
    if( result == 1){
        printf("Set");
    }else if( result == 0){
        printf("Not Set");
    }
    return 0 ;

  
}