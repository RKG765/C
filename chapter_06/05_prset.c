// 1.Write a program to print the address of a variable.Use this address to get the value of the variable. 

#include<stdio.h>

int main(){
    int a=12;
    printf("address of a %u.\n",&a);
    int *b;
    b = &a;
    printf("Value of a through pointer b is %u.\n",*b);
    return 0;
}