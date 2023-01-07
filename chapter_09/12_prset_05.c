// Write a program with structure representing a complex number.

#include<stdio.h>

typedef struct complex{
    int real;
    int imagianary;
}comp;

int main(){
    comp c1;
    c1.real = 23;
    c1.imagianary = 3;
    printf("Real part is:%d,Imaginary part is:%di\n",c1.real,c1.imagianary);
    return 0;
}