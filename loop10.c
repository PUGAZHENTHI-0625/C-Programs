#include<stdio.h>
int main(){
    int n;
    int a=0;
    int b=1;
    scanf("%d",&n);
    int fib = 0;
    for(int i=0;i<n;i++){
        printf("%d ",a);
        int fib =a+b;
        a=b;
        b=fib;
    }
}