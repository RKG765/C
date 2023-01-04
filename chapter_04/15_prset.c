#include<stdio.h>

int main(){
    // by using while loop.
    int num,fact;
    printf("Enter a number:");
    scanf("%d\n",&num);
    fact=1;
    while (fact<num)
    {
        fact++;
        if (num%fact==0)
        {
            printf("The number %d is divisble by %d.\n",num,fact);
            continue;
        }
        fact++;
        
    }
    
    return 0;
}