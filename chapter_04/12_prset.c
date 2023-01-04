#include<stdio.h>

int main(){
    //program printing sum of forst n natural numbers by do-while loop.
    int i=1,sum=0,num;
    printf("Enter a Number:");
    scanf("%d\n",&num);
    do
    {
        sum +=i;
        i++;
    } while (i<=num);
    printf("The sum of %d natural numbers is:%d\n",num,sum);
    
    return 0;
}