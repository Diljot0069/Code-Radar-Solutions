#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int result = (a >> 31) & 1;
    if( result == 1){
        printf("Set");
    }else{
        printf("Not set");
    }
    return 0;

  
}