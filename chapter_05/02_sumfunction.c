#include<stdio.h>

int sum(int a, int b); // function prototype declaration

int main(){
    int a,b;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter b number:");
    scanf("%d",&b);
    sum(a,b);
    
    return 0;
}

int sum(int a, int b){
    int c= printf("The sum of %d + %d is %d.",a,b,a+b);
    return c;
}