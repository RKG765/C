#include<stdio.h>
// Write a program to encrypt a string by adding 1 to the ASCII value of it's character.
void encrypt(char *po){
    char *pointer = po;
    while (*pointer!='\0')
    {
        *pointer = *pointer+1;
        pointer++;
    }
    
}
int main(){
    char ptr[] = "you are going to be killed!";
    encrypt(ptr);
    printf("The encrypted value is: %s\n ",ptr);
    
    return 0;
}