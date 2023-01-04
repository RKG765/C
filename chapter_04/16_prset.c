#include<stdio.h>

int main(){
    int num,fact=1;
    printf("Enter the number:");
    scanf("%d\n",&num);
    do
    {
        fact++;
        if (num%fact==0 && fact<num)        {
            printf("%d is divisible by %d.\n",num,fact);
            continue;
        }
        
    } while (fact<num);
    
    return 0;
}