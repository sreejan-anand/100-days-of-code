#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 9 / 5) + 32;
    
    printf("Fahrenheit=%.0f\n", fahrenheit);
    
    return 0;
}