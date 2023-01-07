#include<stdio.h>
#include<stdlib.h>

int main(){
    // malloc returns void type pointer you will have to convert it.
    // printf("The size of int operator is %d\n",sizeof(int));
    // printf("The size of float operator is %d\n",sizeof(float));
    // printf("The size of char operator is %d\n",sizeof(char));
    int *ptr;
    ptr = (int *) malloc(6 * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("Number %d is :%d\n",i+1,ptr[i]);
    }
    
    
    return 0;
}