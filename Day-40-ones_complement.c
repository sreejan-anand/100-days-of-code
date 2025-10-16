#include <stdio.h>

int main() {
    int binary_number;
    int complement = 0;
    int place = 1;
    int temp;

    printf("Enter a binary number: ");
    scanf("%d", &binary_number);

    temp = binary_number;

    while (temp > 0) {
        int digit = temp % 10;
        if (digit == 0) {
            complement = complement + 1 * place;
        }
        place = place * 10;
        temp = temp / 10;
    }

    printf("1's complement: %d\n", complement);

    return 0;
}