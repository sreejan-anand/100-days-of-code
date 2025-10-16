#include <stdio.h>

int main() {
    int days_late;
    int fine = 0;

    scanf("%d", &days_late);

    if (days_late <= 5) {
        fine = days_late * 2;
        printf("Fine ₹%d\n", fine);
    } else if (days_late <= 10) {
        fine = 5 * 2 + (days_late - 5) * 4;
        printf("Fine ₹%d\n", fine);
    } else if (days_late <= 30) {
        fine = 5 * 2 + 5 * 4 + (days_late - 10) * 6;
        printf("Fine ₹%d\n", fine);
    } else {
        printf("Membership Cancelled\n");
    }

    return 0;
}