#include<stdio.h>
int main(){
    int class,age;;
    int fare;
    scanf("%d %d",&class,&age);

    switch(class){
        case 1:
        fare=300;
        if (age<=12){
            fare=fare*50;
        }
        else if (age>=60){
            fare=fare*33;
        }
        break;

        case 2:
        fare=1000;
        if (age<=12){
            fare=fare*50;
        }
        // else if (age>=60){
        //     fare=fare*33;
        // }
        break;
        default:
        printf("Invalid class");

    }
    printf("%d",fare);
}