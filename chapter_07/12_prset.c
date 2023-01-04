// Create an array of 10 numbers.Verify using pointer arithmetic that (ptr+2) points to the third element, Where ptr is pointer pointing to the first element of the array.

#include<stdio.h>

int main(){
    int array[10]= {1,2,3,4,5,6,7,8,9,0};
    int *ptr = &array[0];
    printf("The value ptr is %d.\n",*ptr);
    printf("The value of 3rd one is %d.\n",*(ptr+3));
    ptr=ptr+2;
    // ptr++;
    printf("The value after ++ is %d.\n",*ptr);
    return 0;
}