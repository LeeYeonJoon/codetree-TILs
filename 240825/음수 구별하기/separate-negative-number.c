#include <stdio.h>

int main() {
    int a; 
    scanf("%d", &a );
    printf("%d\n", a);
    if(a >= 0){
        printf("%d", a);
    }
    else{
        printf("minus");
    }
    return 0;
}