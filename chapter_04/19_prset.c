# include<stdio.h>

int main(){
    // by for loop.
    int num,a=2,prime=1;
    printf("Enter the number:");
    scanf("%d\n",&num);
    for (a;a<num;a++)
    {
        if (num%a==0)
        {
            prime=0;
            break;
        }
    }
    if (prime==0)
    {
        printf("%d is not a prime number.\n",num);
    }
    else
    {
        printf("%d is a prime number.\n",num);
    }
    return 0;
}