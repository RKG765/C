#include<stdio.h>

int nat(int a);

int main(){
    int num;
    printf("Enter a value:");
    scanf("%d",&num);
    printf("The sum of first %d numbers is %d.\n",num,nat(num));
    
    return 0;
}

int nat(int a){
    if (a!=0)
    {
        // printf("printing %d\n",a); // let's take a=5 only valid for here in this recursive function code. 
        return a+nat(a-1); // Here the value of a will be 5+4=9 then it will put the value into a but nat(a-1) will still be taking the real value which is 5 here in this case.
    }
    else
    {
        return a;
    }
    
    }