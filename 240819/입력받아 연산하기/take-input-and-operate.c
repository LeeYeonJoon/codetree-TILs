#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
    a += 87;
    c = b % 10;
    printf("%d\n%d", a, c);
    return 0;
}