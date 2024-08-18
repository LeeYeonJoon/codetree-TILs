#include <stdio.h>

int main() {
    int a, b, c, sum;
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    printf("%d\n", sum);
    printf("%d\n", sum / 3);
    printf("%d\n", sum - sum / 3);
    return 0;
}