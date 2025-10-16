#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    int numerator = 2;
    int denominator = 3;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = sum + (float)numerator / denominator;
        numerator = numerator + 2;
        denominator = denominator + 4;
    }

    printf("Approximate sum: %.2f\n", sum);

    return 0;
}