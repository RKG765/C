#include<stdio.h>

int main(){
    int a=1,num,fact=1;
    printf("Enter a number:");
    scanf("%d\n",&num);
    while (a<=num)
    {
        fact *=a;
        a++;
    }
    printf("Factorial of %d is %d.\n",num,fact);
    return 0;
}