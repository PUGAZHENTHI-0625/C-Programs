#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    if(n>=75 && n<90){
        printf("Grade B");
    }
    else{
        printf("Fail");
    }

    return 0;
}