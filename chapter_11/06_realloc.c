#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int *) malloc(3*sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        printf("Number %d: ",i+1);
        scanf("%d",&ptr[i]);
    }
    int a;
    char b;
    printf("Enter a new number for creating array: ");
    scanf("%d",&a);
    fflush(stdin);
    ptr = realloc(ptr,a*sizeof(int));
    printf("Type 'y' for entering the values: ");
    scanf("%c",&b);
    if (b=='y')
    {
        for (int i = 0; i < a; i++)
        {
            printf("Enter number%d: ",i+1);
            scanf("%d",&ptr[i]);
            printf("Number %d: ",ptr[i]);
        }
    }
    free(ptr);
    
    
    return 0;
}