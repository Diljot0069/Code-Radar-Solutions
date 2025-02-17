#include<stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int prime = 0;
    for(int i = 2; i <= a-1; i++){
        if(a%i ==0){
            prime = 1;
            break;
        }
    }
    if( prime == 0){
        printf("prime");
    }else{
        printf("Not prime");
    }

      
    return 0;
}
