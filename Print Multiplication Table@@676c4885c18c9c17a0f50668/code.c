#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i = 1; i <= 11;i++){
        printf("%d X ",i,"=", a*i);
    }
    return 0;
}