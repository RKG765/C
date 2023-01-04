// Write a program containing a function which reverse the array passed to it.

#include<stdio.h>

void reverse(int ptr[], int a){
    int n,k =0;
    // n = ptr[0];
    // k = ptr[1];
    // ptr[0] = ptr[4];
    // ptr[1] = ptr[3];
    // ptr[2] = ptr[2];
    // ptr[3] = k;
    // ptr[4] = n;
    for (int i = 0; i < (a/2); i++)
    {
        n = ptr[i];
        ptr[i] = ptr[a-i-1];
        ptr[a-i-1] = n;
    }
    
}

int main(){
    int arr[5] = {1,2,3,4,5};
    for (int i = 0; i < 5; i++)
    {
        printf("The value of %d is %d\n",i,arr[i]);
    }
    reverse(arr,5);
    for (int j = 0; j <5; j++)
    {
        printf("The value of %d after reverse is %d.\n",j,arr[j]);
    }
    
    
    return 0;
}