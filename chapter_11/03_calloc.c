#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int *) calloc(5,sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("Number %d is :%d\n",i+1,ptr[i]);
    }
    free(ptr);
    return 0;
}