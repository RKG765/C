#include<stdio.h>

int main(){
    // Question 3.
    int income;
    int a=200000+50000,b=500000,c=1000000;
    printf("Enter your anual income:");
    scanf("%d",&income);
    
    if (income>a && income<=b)
    {
        float rate= (income-a)*0.05;
        printf("\nYour tax amount is: %f\n",rate);
    }
    else if(income=b && income<=c)
    {
        float rate2= (income-b)*0.20;
        printf("Your tax amount is: %f\n",rate2);
    }
    else if(income<=a)
    {
        printf("Your Income is too low for paying tax.");
    }
    else
    {
        float rate3= (income-c)*0.30;
        printf("Your tax amount is: %f\n", rate3);
    }
    
    return 0;
}