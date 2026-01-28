#include <stdio.h>

int main() {
    int hours;
    scanf("%d", &hours);

    switch(hours <= 1) {
        case 1: printf("Short Interruption"); break;
        case 0:
            if(hours <= 4)
                printf("Medium Interruption");
            else
                printf("Long Interruption");
    }
    return 0;
}