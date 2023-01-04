// 5.Write a program to print the value of a variable i by using pointer to pointer type of variable.
#include<stdio.h>

int main(){
    int i=12;
    int *k;
    k = &i;
    printf("The value of i (by k) is %u\n",*k);
    printf("The value of k is %u\n",*(&k));

    int **l;
    l =&k;
    printf("the value of i(by l) is %u\n",**l);
    
    return 0;
}