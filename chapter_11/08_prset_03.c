// Solve problem 1 using calloc() function.

#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    char a;
    ptr = (int *)calloc(6,sizeof(int));
    if (a =='y')
    {
        for (int i = 0; i < 6; i++)
        {
            printf("Enter number %d: ",i+1);
            scanf("%d",ptr[i]);
        }
    }
    else if (a=='n')
    {
        for (int i = 0; i < 6; i++)
        {
            printf("Number %d is: %d\n",i+1,ptr[i]);
        }
    }
    return 0;
}