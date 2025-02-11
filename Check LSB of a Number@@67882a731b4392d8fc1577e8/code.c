#include <stdio.h>

int main() {
    int a;
    int b = 1;
    int result = a & b;
    if ( result == 0){
        printf("Not Set");
    }else{
        printf("Set");
    }
    return 0;
}