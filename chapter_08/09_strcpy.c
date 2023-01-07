#include<stdio.h>
#include<string.h>

int main(){
    char source[] = "Hey,How are you!";
    char copy[40];
    strcpy(copy,source);
    printf("The contents of copy is\n%s.\n",copy);
    return 0;
}