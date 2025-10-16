#include <stdio.h>

int main() {
    int number, reversed = 0, remainder, original;
    
    scanf("%d", &number);
    
    original = number;
    
    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number = number / 10;
    }
    
    if (original == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    
    return 0;
}