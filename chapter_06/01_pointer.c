#include<stdio.h>

int main(){
    int *a;  // it is a pointer
    int b; // simple one
    b =12; 
    a= &b; // means a = address of b. such let's suppose address of b is 12234 then value of b is 12 because a points the &b but the &a will be different.
    printf("%d\n",*a); // here printing the value of a which is = to value of b.
    printf("Address of %u\n",a); // will print address of a according to this (a=&b).
    printf("Address by & %u\n",&a); // it will find the address of a but it will be different from the address of b because here we are finding the address of a in which the address b is stored. 
    printf("Address %u\n",b); // value of b.
    printf("Address by & %u\n",&b); // address of b.
    printf("Address by & %u\n",*(&a)); // address of a according to this (a=&b)..
    return 0;
}