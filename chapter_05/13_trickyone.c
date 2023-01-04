#include<stdio.h>

int main(){
    int a=3;
    // Note: it will print 5 5 3
    // Because printf take arguments right to left but it will in order you will print it.
    // from RHS
    // first it will read a++ it's value become 4 but it will print 3.
    // second it will read ++a it's value become 5 and it will print it.
    // third it will print a which is 5.
    printf("%d %d %d",a,++a,a++); 
    return 0;
}