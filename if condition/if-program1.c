#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n>=0){
    printf("Positive number \n",n);
}
    else if (n<=0) {
        printf("negative number",n);
    }else {
        printf("zero",n);
    }

    return 0;
}