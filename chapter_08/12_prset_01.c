#include<stdio.h>
#include<string.h>

// Write a program to take string as an input from the user using %c and %s.Confirm that the strings are equal.

int main(){
    char name[30];
    char fell[30];
    char c;
    int i = 0;
    printf("Enter your name: ");
    scanf("%s",&fell);
    printf("Enter the value of name charcater by character:\n");    
    while(c!='\n'){
        fflush(stdin);
        scanf("%c",&c); 
        name[i] = c;
        i++;
    }
    name[i-1] = '\0';
    printf("The value of name is %s\n",name);
    return 0;
}