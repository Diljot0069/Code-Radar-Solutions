#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if( a > b){
        printf("Yes");
    }else if( a < b){
        printf("No");
    }
    printf("%s", welcome());
    return 0;
}