#include<stdio.h>

int main(){
    // Question1.
    int a=10;
    if (a=11)
    {
        printf("I am  eleven.\n");
    }
    else
    {
        printf("I am not eleven.");
    }

    // Question2.

    float marks1,marks2,marks3;
    float marks;
    printf("\nEnter your marks in Maths(0-100):");
    scanf("%f",&marks1);
    printf("\nEnter your marks in Science(0-100):");
    scanf("%f",&marks2);
    printf("\nEnter your marks in English(0-100):");
    scanf("%f",&marks3);
    float totalmarks= marks1+marks2+marks3;
    marks=(totalmarks)/3.0;

    if (marks1>=33.0 && marks2>=33.0 && marks3>=33.0 && marks>=40.0)
    {
        printf("\nCongrats! You are Pass.\n");
        printf("\nYou scored:\n %f",totalmarks);
        printf("\nPercentage:\n %f",marks);
    }
    else if(marks1>100.0 || marks2>100.0 || marks3>100.0)
    {
        printf("Please enter valid Marks(0-100)");
    }
    else
    {
        printf("Sorry, You are Fail.");
    }
    return 0;
}