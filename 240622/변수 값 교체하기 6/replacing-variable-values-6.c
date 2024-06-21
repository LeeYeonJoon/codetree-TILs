#include <stdio.h>

int main() {
    int a = 2;
    int b = 5;
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    printf("%d\n%d", a, b);
    return 0;
}