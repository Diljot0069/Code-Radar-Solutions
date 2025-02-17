#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int result = (a >> 31) & 1;
    if(result){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;

  
}