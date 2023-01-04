#include<stdio.h>

int main(){
    // for integer
    int a =12;
    int *pointer;
    pointer = &a;
    printf("The address of pointer before is %u\n",pointer);
    pointer ++; // adds 4-bytes to the the orignal address.
    printf("The address of pointer after is %u\n",pointer);
    // for float
    float b = 34.9;
    float *pointerfloat;
    pointerfloat =&b;
    printf("The address of pointer before is %.2u\n",pointerfloat);
    pointerfloat++; // adds 4-bytes to the the orignal address.
    printf("The address of pointer after is %.2u\n",pointerfloat);
    // for character
    char c ='a';
    char *pointerchar = &c;
    printf("The address of pointer before is %u\n",pointerchar);
    pointerchar++; // adds 1-bytes to the the orignal address.
    printf("The address of pointer after is %u\n",pointerchar);

    return 0;
}