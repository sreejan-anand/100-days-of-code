#include <stdio.h>

int main() {
    int n;
    int i;
    int product = 1;
    int has_even = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            product = product * i;
            has_even = 1;
        }
    }

    if (has_even == 0) {
        product = 0;
    }

    printf("%d\n", product);

    return 0;
}