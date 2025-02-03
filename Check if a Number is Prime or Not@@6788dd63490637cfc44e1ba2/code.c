#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(n >= 2){
        for( i == 2;i * i <= a;i++){
            if(a % i == 0){
                printf("Not Prime");
            }else{
                printf("Prime");
            }
        }
    }else{
        printf("Not Prime");
    }
    return 0;
}