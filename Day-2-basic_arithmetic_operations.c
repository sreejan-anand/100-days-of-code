#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;
    int quotient;

    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;

    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, difference, product, quotient);

    return 0;
}