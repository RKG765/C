#include<stdio.h>

int main(){
    // by for loop.
    int a=1,num,factorial=1;
    printf("Enter a number:");
    scanf("%d\n",&num);
    for(a;a<=num;a++){
        factorial *=a;
    }
    printf("The factorial value of %d is %d.\n",num,factorial);
    return 0;
}