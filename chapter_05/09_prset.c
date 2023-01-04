#include<stdio.h>

float temp(float c);

int main(){
    float t,e;
    printf("Enter the temperature in *c:");
    scanf("%f",&t);
    printf("Temperature in *F is %.2f.\n",temp(t));
    
    return 0;
}

float temp(float c){
    return (c*9/5)+32.0;
}