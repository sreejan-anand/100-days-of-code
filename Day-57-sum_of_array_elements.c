#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int element;
        scanf("%d", &element);
        sum += element;
    }
    
    printf("%d\n", sum);
    
    return 0;
}