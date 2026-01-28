#include <stdio.h>

int main() {
    int mark;

    printf("Enter the mark:");
    scanf("%d", &mark);

    switch (mark / 10) {
        case 10:
            printf("Grade A");
            break;

        case 9:
            printf("Grade B");
            break;

        case 6:
            printf("Grade C");
            break;

        case 5:
            printf("Grade D");
            break;

        case 4:
            printf("Grade E");
            break;

        case 3:
            if (mark >= 35)
                printf("Grade Supplementary");
            else
                printf("Grade fail");
            break;
    }

    return 0;
}