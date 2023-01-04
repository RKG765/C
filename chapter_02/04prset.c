#include<stdio.h>

int main(){
    // int a; a=b; invalid because here is not mentioned int or float or char,etc.
    // int v = 3^3; it is valid but it won't do anything answer is same 0.
    // printf("%f ",v);
    // char dt='21 Dec 2020';  it is invalid.
    // printf("%c",dt);
    int x=2,y=3,z=3,k=1;
    // operator precendence
    printf("The value of 3*x/y-z+k is %d",3*x/y-z+k);
    // the step evaluation will be like this
    // 3*2/3-3+1
    // 6/3-3+1
    // 2-3+1
    // -1+1
    // 0 
    // now with operator associativity
    printf("\nThe value of (3*x)/(y-z+k) is %d",(3*x)/(y-z+k));
    // a program in which number is divisible by 97 or not
    int num;
    printf("\nEnter the number:");
    scanf("%d",&num);
    printf("Divisiblity test: %d",num%97);
    return 0;
}