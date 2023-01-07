// Write a program to create a dynamic array of 5 floats using malloc.

#include<stdio.h>
#include<stdlib.h>
int main(){
    float *ptr;
    ptr = (float *) malloc(5 * sizeof(float));

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Float Number %d: ",i+1);
        scanf("%f",&ptr);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Number %d is :%.4f\n",i+1,ptr[i]);
    }
    
    return 0;
}