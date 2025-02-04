#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a <= 1 ){
        printf("Not Prime");
        return 0;
    }else{
        int x = 1;
        for(int i = 2; i * i <= a; i++){
            if( a % i == 0){
                x = 0;
                break;
            }   
        }
        if(x){
            printf("Prime\n");
        }else{
            printf("Not Prime");
        }
    }
            
    return 0;
}