#include<stdio.h>

int main(){
    // a program to print multiplication table of given number.
    int num,mul=1;
    printf("Enter the number:");
    scanf("%d\n",&num);
    for ( num,mul ; mul <11; mul++)
    {
        printf("%d x %d = %d\n",num,mul,num*mul);
    }
    
    return 0;
}