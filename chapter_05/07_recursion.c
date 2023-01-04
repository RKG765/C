#include<stdio.h>
int fact(int x);

int main(){
    int factorial;
    printf("Enter a number:");
    scanf("%d",&factorial);
    printf("The factorial of %d is %d.\n",factorial,fact(factorial));

    return 0;
}

int fact(int x){
    if (x==1 || x==0)
    {
        return 1;
    }
    else{
        printf("how will this work %d\n",x);
        return x*fact(x-1);
        // here it will work like this 5* fact(5-1)
        // 5*fact(4)
        //    4
    }
    
}