#include <stdio.h>

int main() {
    int number;
    int product = 1;
    int has_odd_digit = 0;
    
    scanf("%d", &number);
    
    if (number == 0) {
        product = 1;
    } else {
        while (number > 0) {
            int digit = number % 10;
            if (digit % 2 != 0) {
                product = product * digit;
                has_odd_digit = 1;
            }
            number = number / 10;
        }
    }
    
    if (has_odd_digit == 0) {
        product = 1;
    }
    
    printf("%d\n", product);
    
    return 0;
}