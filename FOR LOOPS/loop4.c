#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int mul = 0;

    for(int i=1;i<=10;i++){
        mul = n*i;
        printf("%d \n",mul);
    }
    return 0;
}



