// Write a program to accept marks of five students in an array and print them to the screen.

#include<stdio.h>

int main(){
    int marks[5]; //it allocates four spaces of integer.
    printf("Enter the marks of student 1: ");
    scanf("%d",&marks[0]);
    printf("Enter the marks of student 2: ");
    scanf("%d",&marks[1]);
    printf("Enter the marks of student 3: ");
    scanf("%d",&marks[2]);
    printf("Enter the marks of student 4: ");
    scanf("%d",&marks[3]);
    printf("Enter the marks of student 5: ");
    scanf("%d",&marks[4]);
    printf("You entered marks %d,%d,%d,%d,%d.",marks[0],marks[1],marks[2],marks[3],marks[4]);
    return 0;
}