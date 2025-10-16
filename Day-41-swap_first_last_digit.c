#include <stdio.h>

int main() {
    int number, first_digit, last_digit, temp_number, digits_count = 0, swapped_number = 0, multiplier = 1;
    
    scanf("%d", &number);
    
    temp_number = number;
    last_digit = temp_number % 10;
    
    while (temp_number > 0) {
        temp_number = temp_number / 10;
        digits_count++;
    }
    
    temp_number = number;
    first_digit = temp_number;
    while (temp_number >= 10) {
        temp_number = temp_number / 10;
        first_digit = temp_number;
    }
    
    if (digits_count <= 1) {
        printf("%d\n", number);
        return 0;
    }
    
    swapped_number = last_digit;
    
    temp_number = number;
    for (int i = 1; i < digits_count - 1; i++) {
        int digit = temp_number % 10;
        temp_number = temp_number / 10;
        swapped_number = swapped_number * 10 + digit;
    }
    
    swapped_number = swapped_number * 10 + first_digit;
    
    temp_number = swapped_number;
    swapped_number = 0;
    for (int i = 0; i < digits_count; i++) {
        int digit = temp_number % 10;
        temp_number = temp_number / 10;
        swapped_number = swapped_number * 10 + digit;
    }
    
    printf("%d\n", swapped_number);
    
    return 0;
}