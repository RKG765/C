# include<stdio.h>
int main(){
    int num,i=2,prime=1;
    printf("Enter a number:");
    scanf("%d\n",&num);
    while(i<num){
        i++;
        if (num%i==0)
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