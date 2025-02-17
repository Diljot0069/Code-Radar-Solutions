#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int result = a >> 31;
    int b = result & 1;
    if( b == 1){
        printf("Set");
    }else{
        printf("Not set");
    }
    return 0;

  
}