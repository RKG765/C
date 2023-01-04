#include<stdio.h>

int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);

    (a>100)? printf("a is greater than 100"):(a==100)? printf("a is equal to 100") : printf("a is less than 100");
    return 0;
}