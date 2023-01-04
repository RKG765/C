#include<stdio.h>

int main(){
    int num,fact;
    
    printf("Enter a number:");
    scanf("%d\n",&num);
    for(fact=1,num;fact<num;fact++){
        if (num%fact==0)
        {
            printf("The number %d is divisble by %d.\n",num,fact);
            continue;
        }
        
    }
    return 0;
}