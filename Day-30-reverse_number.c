#include <stdio.h>

int main() {
    int number, reversed = 0, remainder;
    
    scanf("%d", &number);
    
    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number = number / 10;
    }
    
    printf("%d", reversed);
    
    return 0;
}