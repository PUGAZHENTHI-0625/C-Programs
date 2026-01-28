#include <stdio.h>

int main() {
    int days, fine=0;
    scanf("%d", &days);

    switch(days <= 5) {
        case 1: fine = days * 50; break;
        case 0:
            if(days <= 10)
                fine = days * 100;
            else
                fine = days * 200;
    }

    printf("Fine ₹%d", fine);
    return 0;
}