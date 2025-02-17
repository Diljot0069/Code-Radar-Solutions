#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int result = (a >> 31) & 1;
    if(result){
        printf("Not Set");
    }else{
        printf("set");
    }
    return 0;

  
}