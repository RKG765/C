#include<stdio.h>

void display(); //function prototype is a way to tell the compiler that we are making a function.
int main(){
    // Syntax of function.
    display();
    printf("Hello");
    printf(" World");
    return 0;
}
void display(){
    printf("This is function.\n");
}