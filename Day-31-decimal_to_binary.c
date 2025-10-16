#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    int binary[32];
    int i = 0;
    
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    
    printf("\n");
    return 0;
}