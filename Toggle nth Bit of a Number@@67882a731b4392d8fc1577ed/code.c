#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int c = 1 << b;
    int result = a ^ c;
    printf("%d",result);
    return 0;

}