#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int sum = 0;
    int current_odd = 1;
    
    for (int i = 0; i < n; i++) {
        sum += current_odd;
        current_odd += 2;
    }
    
    printf("%d\n", sum);
    
    return 0;
}