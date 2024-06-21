#include <stdio.h>

int main() {
    int a, b, c;
    int tmp1, tmp2;
    a = 5;
    b = 6;
    c = 7;
    tmp1 = b;
    b = a;
    tmp2 = c;
    c = tmp1;
    a = tmp2;
    printf("%d\n%d\n%d", a, b, c);
    return 0;
}