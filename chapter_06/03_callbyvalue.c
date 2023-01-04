// adding two numbers.
#include<stdio.h>
int add(int a,int b);
int main(){
    int x,y;
    x=13;
    y=12;
    printf("The value of 13+12 is %d.\n",add(x,y));
    
    return 0;
}
int add(int a,int b){
    int c;
    c= a+b;
    b =123222; // it won't change the values in main function's argument's values.
    a=8214;
    return c;
}