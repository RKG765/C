// Write a program to dynamically create an array of size 6 capable of storing 6 integer.
// Use the sam problem to store 6 integers entered by  an user.

#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int *)malloc(6*sizeof(int));
    // problem 1,2
    // ptr[0] = 2367;
    // ptr[1] = 2334;
    // ptr[2] = 2343;
    // ptr[3] = 453;
    // ptr[4] = 3423;
    // ptr[5] = 1223;
    // Entered by an user.
    for (int i = 0; i < 6; i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&ptr[i]);
    }
    return 0;
}