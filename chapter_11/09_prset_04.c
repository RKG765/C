// Create an array dynamically capable of storing 5 integers.Now  use realloc so that it can use 10 intger.
// Solve the sam problem with calloc function.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int *)malloc(5*sizeof(int));
    // For calloc
    // ptr = (int *)calloc(5,sizeof(int));

    ptr = realloc(10,sizeof(int)); //It will work on both callocc and malloc.
    return 0;
}