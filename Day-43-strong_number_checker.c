#include <stdio.h>

int main() {
    int number, temp, digit;
    int sum = 0;
    
    scanf("%d", &number);
    
    temp = number;
    
    while (temp > 0) {
        digit = temp % 10;
        int factorial = 1;
        int i = 1;
        
        while (i <= digit) {
            factorial = factorial * i;
            i++;
        }
        
        sum = sum + factorial;
        temp = temp / 10;
    }
    
    if (sum == number) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }
    
    return 0;
}