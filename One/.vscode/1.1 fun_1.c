#include<stdio.h>
void swap(int* pa, int* pb){
    int z = 0;
    z = *pa;
    *pa = *pb;
    *pb = z;
}
int main(){
    int a = 10;
    int b = 20;
    printf("交换前：a=%d b=%d\n", a, b);
    swap(&a,&b);
    printf("交换后：a=%d b=%d\n", a, b);
}