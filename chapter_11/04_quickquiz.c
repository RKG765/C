// Write a program to create an array of size n using calloc where n is an integer entered by an user.

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int *ptr;
    printf("How many numbers in array: ");
    scanf("%d",&n);
    fflush(stdin);
    ptr = (int *) calloc(n,sizeof(int));
    if (n!=0){
        for (int i = 0; i < n; i++)
        {
            printf("Enter number %d: ",i+1);
            scanf("%d",&ptr[i]);
        }
        for (int k = 0;k < n; k++)
        {
            printf("Number %d is: %d\n",k+1,ptr[k]);
        }
    }
    
    return 0;
}