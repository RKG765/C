#include<stdio.h>

int main(){
    int arr[3] ={1,4,9};
    int *pointer = &arr[0];
    int *point = &arr[2];
    printf("The value of pointer before is %d.\n",*pointer);
    printf("The address of arr[o] before is %u.\n",pointer);
    pointer++;
    printf("The value of pointer after is %d.\n",*pointer);
    printf("The address of arr[o] after is %u.\n",pointer);
    pointer ++;
    printf("The value of pointer after +2 is %d.\n",*pointer);
    printf("The address of arr[o] after +2 is %u.\n",pointer);
    printf("The address of point is %u.\n",point);
    pointer --;
    printf("The value of pointer after -- is %d.\n",*pointer);
    printf("The address of arr[o] after -- is %u.\n",pointer);
    point-pointer;
    printf("The addres of pointer is %u.\n",pointer);
    printf("The value of pointer is %d.\n",*pointer);
    return 0;
}