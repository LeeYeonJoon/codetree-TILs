#include <stdio.h>

int main() {
    char c;
    float a, b;
    scanf("%c", &c);
    scanf("%f", &a);
    scanf("%f", &b);
    printf("%c\n%.2f\n%.2f", c, a, b);
    return 0;
}