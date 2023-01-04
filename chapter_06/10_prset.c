// 6.Try problem 3 using call by value and verify that it doesn't change the value of the same variable.

#include<stdio.h>
int mul(int a);

int main(){
    int a=12;
    printf("The value of a before function is %d.\n",a);
    mul(a);
    printf("The value of a after function is %d.\n",a); 
    // Hence verified the values can't be cahnged in a function through call by value.
    
    return 0;
}
int mul(int a){
    int b = a;
    a = b*10;
    return a;
}