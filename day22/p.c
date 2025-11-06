#include <stdio.h>

int main()
{
    int n, i;
    double sum = 0.0;

    printf("Enter number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    if (n >= 1) {
        sum += 1.0;          // first term is exactly 1
    }

    for (i = 2; i <= n; i++) {
        sum += (double)(2 * i - 1) / (2 * i);
    }

    printf("Sum of the series up to %d terms = %.6f\n", n, sum);
    return 0;
}