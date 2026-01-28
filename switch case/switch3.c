#include<stdio.h>
int main(){
    int accountType,balance,withdraw;
    scanf("%d %d %d",&accountType,&balance,&withdraw);
    switch(accountType){
        case 1:
            if(balance>withdraw){
                printf("transaction succeded");
            }else{
                printf("transaction rejected");
            }
            break;

        case 2:
            if(withdraw<balance){
                printf("invalid tracsaction");
            }else{
                printf("tracsaction exceeds");
            }
        default:
        break;


    return 0;

    }
   
}