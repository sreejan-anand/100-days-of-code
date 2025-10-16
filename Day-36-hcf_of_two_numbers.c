#include <stdio.h>

int main() {
    int a, b, hcf, i;

    scanf("%d %d", &a, &b);

    if (a > b) {
        hcf = a;
        a = b;
        b = hcf;
    }

    for (i = 1; i <= a; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    printf("%d\n", hcf);

    return 0;
}