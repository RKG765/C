#include<stdio.h>

int main(){
    char s[20];
    printf("Enter your name: ");
    gets(s);

    printf("Your name is %s.\n",s);
    return 0;
}