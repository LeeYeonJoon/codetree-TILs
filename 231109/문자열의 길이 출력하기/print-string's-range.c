#include <stdio.h>
#include <string.h>
int main() {
    char a[101],b[101];
    int sum=0;
    scanf("%s",a);
    scanf("%s",b);
    int len1, len2;
    len1 = strlen(a);
    len2 = strlen(b);
    sum = len1 + len2;
    printf("%d",sum);
    return 0;
}