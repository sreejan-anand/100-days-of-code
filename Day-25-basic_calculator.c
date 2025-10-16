#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;

    scanf("%d %d %c", &num1, &num2, &operator);

    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        case '%':
            result = num1 % num2;
            break;
        default:
            printf("Invalid operator");
            return 1;
    }

    printf("%d", result);

    return 0;
}