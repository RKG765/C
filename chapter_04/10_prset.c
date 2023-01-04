#include <stdio.h>

int main(){
    // program printing sum of forst n natural numbers by for loop.
    int i,sum=0,n=10;
    for ( i=1; i<=n; i++)
    {
        sum +=i;
    }
    printf("The value of sum of first 10 natural numbers is:%d\n",sum);
    
    
    return 0;
}