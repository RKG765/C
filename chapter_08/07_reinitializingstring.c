#include<stdio.h>

int main(){
    //  following one can be reinitialize with pointer.
    char *ptr= "Hello World";
    printf("%s",ptr);
    ptr = "Whio";
    printf("%s",ptr); 

    // following one can't be reinitialized with array.
    // char ptr[] = "Hello world";
    // ptr = "bey";
    // printf("%s",ptr);

    return 0;
}