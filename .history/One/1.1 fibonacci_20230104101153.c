#include<stdio.h>
int Fib(int n){
    if(n <= 2)
        return 1;
    else
        return Fib(n-2) + Fib(n-1);
}

int main(){
    int n;
    scanf("%d", &n);
    int ret = Fib(n);
    printf("%d", ret);
    return 0;
}