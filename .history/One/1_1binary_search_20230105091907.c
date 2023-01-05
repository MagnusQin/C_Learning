#include<stdio.h>

int binary_search(int a[], int k, int sz){
    int left = 0;
    int right = sz - 1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(a[mid] > k){
            right = a[mid] -1;
        }
        else if (a[mid] < k){
            left = a[mid] +1;
        }
        else
            return mid;
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int key = 3;
    int size = sizeof(arr) / sizeof(arr[0]);
    int ret = binary_search(arr, key, size);
    if(ret == -1){
        printf("未找到！");
    }
    else
        printf("找到了，其下标为：%d",ret);
    return 0;
}