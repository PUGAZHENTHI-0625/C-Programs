#include <stdio.h>

int main() {
    int type, km, fare=0;
    scanf("%d %d", &type, &km);

    switch(type) {
        case 1: fare = km * 10; break;
        case 2: fare = km * 15; break;
        case 3: fare = km * 20; break;
        default: printf("Invalid"); return 0;
    }

    printf("Fare ₹%d", fare);
    return 0;
}