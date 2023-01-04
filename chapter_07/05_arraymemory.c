#include<stdio.h>

int main(){
    int arr[3]={23,43,45};
    printf("The address of arr[%d] is %u\n",arr[0],&arr[0]);
    printf("The address of arr[%d] is %u\n",arr[1],&arr[1]);
    return 0;
}