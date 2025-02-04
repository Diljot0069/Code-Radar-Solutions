#include <stdio.h>



int main() {
    char a;
    scanf(" %c",&a);
    if(a == 32){
        printf("32");
    }else{
    printf("ASCII Value: %d",a);
    }
    return 0;
}