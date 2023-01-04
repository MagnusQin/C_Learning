#include<stdio.h>
//递归
// int Fib(int n){
//     if(n <= 2)
//         return 1;
//     else
//         return Fib(n-2) + Fib(n-1);
// }

//循环
int Fib(int n){
    int a = 1;
    int b = 1;
    int c = 1;
    while(n > 2){
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}
int main(){
    int n;
    scanf("%d", &n);
    int ret = Fib(n);
    printf("%d", ret);
    return 0;
}