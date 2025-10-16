#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    int numerator = 1;
    int denominator = 2;
    
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum = sum + (float)numerator / denominator;
        numerator = numerator + 2;
        denominator = denominator + 2;
    }
    
    printf("Approximate sum: %.1f\n", sum);
    
    return 0;
}