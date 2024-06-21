#include <stdio.h>

int main() {
    int a, b, c;
    a = 5;
    b = 6;
    c = 7;
    a = c;
    b = c;
    printf("%d %d %d", a, b, c);
    return 0;
}