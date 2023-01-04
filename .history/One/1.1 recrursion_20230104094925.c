#include<stdio.h>

// int my_strlen(char* str){
//     int count = 0;
//     while (*str != '\0')
//     {
//         count++;
//         str++;
//     }
//     return count;
// }

//递归
int my_strlen(char* str){
    if(*str != '\0')
        return 1 + my_strlen(str + 1);
    else
        return 0;
}


int main(){
    char arr[] = "bit";
    printf("字符长为：%d\n", my_strlen(arr));
    return 0;
}