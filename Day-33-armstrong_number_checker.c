#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, remainder, n = 0, result = 0;

    scanf("%d", &number);
    originalNumber = number;

    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    if (result == number)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}