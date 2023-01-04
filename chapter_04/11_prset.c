# include <stdio.h>

int main(){
    // // program printing sum of forst n natural numbers by while loop.
    int i=0,sum=0,num;
    printf("Enter the number:");
    scanf("%d\n",&num);
    while (i<=num)
    {
        sum += i;
        i++;
    }
    printf("The sum of first %d natural numbers is: %d\n",num,sum);
    
    return 0;
}