// Write a program to demonstrate the usage of free() with malloc().
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    float *ptr;
    printf("Enter the number of stundents: ");
    scanf("%d",&a);
    fflush(stdin);
    ptr= malloc(a*sizeof(float));
    for (int i = 0; i < a; i++)
    {
        printf("Enter marks for student%d: ",i+1);
        scanf("%f",&ptr);
        printf("The marks of student%d is: %f",i+1,ptr[i]);
    }
    // for (int i = 0; i < a; i++)
    // {
    // }
    free(ptr);
    
    return 0;
}