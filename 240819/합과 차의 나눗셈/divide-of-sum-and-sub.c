#include <stdio.h>

int main() {
    int a, b;
    float c;
    scanf("%d %d", &a, &b);
    c = (double)(a + b) / (a - b);
    printf("%.2f", c);
    return 0;
}