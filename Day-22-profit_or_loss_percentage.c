#include <stdio.h>

int main() {
    float cost_price, selling_price, profit_loss_percentage;
    
    scanf("%f %f", &cost_price, &selling_price);
    
    if (selling_price > cost_price) {
        profit_loss_percentage = ((selling_price - cost_price) / cost_price) * 100;
        printf("Profit %.0f%%", profit_loss_percentage);
    } else if (cost_price > selling_price) {
        profit_loss_percentage = ((cost_price - selling_price) / cost_price) * 100;
        printf("Loss %.0f%%", profit_loss_percentage);
    } else {
        printf("No Profit No Loss");
    }
    
    return 0;
}