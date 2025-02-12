#include<stdio.h>
int main(){
    int a;
    scanf("%d %d",&a,&b);
    int c = a & ~(1 << b) ;
    c = 1<<b;
    int result = a ^ c;
    printf("%d",result);
}