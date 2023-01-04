#include<stdio.h>

int main(){
    int a[] = {34,345,356};  // Other way of intialising arrays.
    printf("The value of 1 is %d\n",a[0]);
    printf("The value of 2 is %d\n",a[1]);
    printf("The value of 3 is %d\n",a[2]);
    float n[] = {32.3,45.3,54.3};
    for (int i = 0; i <3; i++)
    {
        printf("The values of float are %.2f\n",n[i]);
    }
     
    return 0;
}