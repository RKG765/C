// Create a two dimensional vector using structures in C.

#include<stdio.h>
#include<string.h>
typedef struct vector
{
    int x;
    int y;
}vec;

int main(){
    vec v1;
    v1.x =32;
    v1.y = 21;
    printf("X dimension is %dx,Y dimension is %dy\n",v1.x,v1.y);
    
    

    return 0;
}