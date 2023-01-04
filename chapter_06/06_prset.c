// 2.Write a program having a variable i. print the address of i.Pass this variable to a function and print it's address.Are these addresses are same?Why?
// Answer is no. because

#include<stdio.h>
void pass(int a);
void pass1(int a);

int main(){
    int i=14;
    printf("Address of i is %u\n",&i);
    pass(i);
    // pass1(i);
    // printf("address of the function pass1 is %u\n",&pass1(i)); // error
    return 0;
}

void pass(int a){
    printf("Address of i in function is %u\n",&a);
}
void pass1(int a){
    printf("\n");
}