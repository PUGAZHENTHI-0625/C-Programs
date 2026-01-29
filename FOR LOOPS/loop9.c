#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count =0;
    for(int i=n%10;n!=0;n=n/10){
        count=count+1;
    }
    printf("%d",count);
}