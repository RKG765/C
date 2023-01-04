#include<stdio.h>

int area(float radius);

int main(){
    float a,b;
    printf("Enter the radius of circle:");
    scanf("%f",&a);
    b = area(a);
    printf("The area of circle is %f unit sq.\n",b);
    return 0;
}

int area(float radius){
    float pi = 3.14;
    float area= radius*radius*pi;
    return area;
}