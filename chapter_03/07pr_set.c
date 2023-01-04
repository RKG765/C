#include<stdio.h>

int main(){
    int leap;
    printf("Enter year: ");
    scanf("%d",&leap);
    if (leap%4==0 && leap%400==0 || leap%100!=0)
    {
        printf("%d is a Leap year.\n",leap);
    }
    else
    {
        printf("%d is not a Leap year.\n",leap);
    }
    
    
    return 0;
}