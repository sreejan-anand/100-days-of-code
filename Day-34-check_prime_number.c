#include <stdio.h>

int main() {
    int number;
    int is_prime = 1;
    
    scanf("%d", &number);
    
    if (number <= 1) {
        is_prime = 0;
    } else {
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }
    
    if (is_prime == 1) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }
    
    return 0;
}