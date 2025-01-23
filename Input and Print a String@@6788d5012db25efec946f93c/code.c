#include <stdio.h>
int main(){
    char a[100];
    fgets(a,sizeof(a),stdin)
    scanf(" %c",&a);
    printf("You entered: %c",a);
    return 0;
}
