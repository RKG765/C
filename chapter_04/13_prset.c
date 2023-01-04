#include<stdio.h>

int main(){
    int a,b,c,d;
    a = 8;
    b = 1;
    c=0;
    while (b<=10)
    {
        c += (a*b);
        b++;

    }
    printf("%d",c);
    
    return 0;
}