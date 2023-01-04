// Write a program to accept marks of five students in an array and print them to the screen.

#include<stdio.h>

int main(){
    int marks[5];
    for (int x = 0; x <5; x++)
    {
        printf("Enter the marks of student %d: ",x+1);
        scanf("%d",&marks[x]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("The marks of student %d is %d.\n",i+1,marks[i]);
    }
    
    

    return 0;
}