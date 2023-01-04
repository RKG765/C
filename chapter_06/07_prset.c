// 3.Write a program to change the value of a variable to ten times of it's current value.Write a function and pass the value by refrence.

#include<stdio.h>
int mul(int *a);
int main(){
    int x=12;
    // printf("Enter the value of x:");
    // scanf("%d",&x);
    mul(&x);
    printf("The new value of x is %d.\n",x);

}
int mul(int *a){
    int c=*a;
    *a = (10*c);
    return *a;
}