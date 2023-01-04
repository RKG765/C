#include<stdio.h>

int main(){
    int a=12;
    printf("Address of a is %u.\n",&a);
    int *b;
    b=&a;
    printf("Addres of b(condition) is %u.\n",b);
    printf("Address of b is %u.\n",&b);

    int **c; // pointer to pointer 
    c=&b;
    printf("Address of c(condition) is %u.\n",c);
    printf("Address of c is %u.\n",&c);

    int ***d; // pointer to a pointer to pointer
    d=&c;
    printf("Address of d(condition) is %u.\n",d);
    printf("Address of d is %u.\n",&d);


    return 0;
}