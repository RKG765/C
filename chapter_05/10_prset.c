#include<stdio.h>

float force(float m);

int main(){
    float m;
    printf("Enter the mass of object:");
    scanf("%f",&m);
    printf("The force of attraction is %.2f N.\n",force(m));
    
    return 0;
}

float force(float m){
     float g = 9.8;
    return m*g;
}