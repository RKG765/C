// 4.Write a program using a function which calculates the sum and the average of two numbers.Use pointers and print the value of sum and average in main().

#include<stdio.h>
int sum(int a,int b);
float average(float a,float b);

int main(){
    int x=12,y=15;
    int e;
    float f;
    int *a;
    float *b;
    e = sum(x,y);
    printf("The sum of x and y is %d.\n",e);
    a=&e;
    printf("Value of *a is %u.\n",*a);
    f= average(x,y);
    printf("The average of x,y is %.2f.\n",f);
    b=&f;
    printf("Value of *b is %.2f.\n",*b);

    
    return 0;
}

int sum(int a,int b){
    return a+b;
}
float average(float a,float b){
    return (a+b)/2;
}