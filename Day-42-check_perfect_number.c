#include <stdio.h>

int main() {
    int number, sum = 0, i;
    
    scanf("%d", &number);
    
    for (i = 1; i < number; i++) {
        if (number % i == 0) {
            sum = sum + i;
        }
    }
    
    if (sum == number) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }
    
    return 0;
}