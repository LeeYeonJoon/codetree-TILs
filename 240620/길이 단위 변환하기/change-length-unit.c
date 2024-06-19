#include <stdio.h>

int main() {
    float ft = 9.2;
    float mi = 1.3;
    float ft_cm = 9.2 * 30.48;
    float mi_cm = 1.3 * 160934;
    printf("%.1fft = %.1fcm\n%.1fmi = %.1fcm", ft, ft_cm, mi, mi_cm);
    return 0;
}