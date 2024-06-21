#include <stdio.h>

int main() {
    int a, b, tmp;
    a = 3;
    b = 5;
    tmp = a;
    a = b;
    b = tmp;
    printf("%d\n%d", a, b);
    return 0;
}