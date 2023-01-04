#include<stdio.h>

float average(int a,int b,int c);

int main(){
    // average of three numbers
    int e,f,g;
    printf("Enter a number:");
    scanf("%d",&e);
    printf("Enter a number:");
    scanf("%d",&f);
    printf("Enter a number:");
    scanf("%d",&g);
    printf("The average of numbers %d,%d,%d is %f.\n",e,f,g,average(e,f,g));
    return 0;
}

float average(int a,int b,int c){
    float avg= (float)(a+b+c)/3;
    return avg;
}