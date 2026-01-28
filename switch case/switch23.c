#include <stdio.h>

int main() {
    int type, amount;
    scanf("%d %d", &type, &amount);

    switch(type) {
        case 1:
            amount -= amount * 0.05;
            break;
        case 2:
            amount -= amount * 0.15;
            break;
        default:
            printf("Invalid");
            return 0;
    }

    printf("Pay ₹%d", amount);
    return 0;
}