// 4.Write a program using a function which calculates the sum and the average of two numbers.Use pointers and print the value of sum and average in main().

#include<stdio.h>

void sumANDavg(int x,int y,int *sum,float *avg);

int main(){
    int a,b,sum;
    float avg;
    a=13;b=23;
    sumANDavg(a,b,&sum,&avg);
    printf("The sum of two numbers are %d.\n",sum);
    printf("The average of two numbers are %.2f.\n",avg);    
    return 0;
}
void sumANDavg(int x,int y,int *sum,float *avg){
    *sum= x+y;
    *avg= (float)(*sum/2);
}