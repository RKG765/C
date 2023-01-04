// Write a program containing a function which counts the number of positive integer in an array.

#include<stdio.h>

void positiveInteger(int ptr[],int a){
    int count =0;
    for (int i = 0; i < a; i++)
    {
        if (ptr[i]>0)
        {
            count+=1;
            continue;
        }
    }
    printf("The number of positive integer is %d.",count);
    }

int main(){
    int arr[12] = {12,-32,234,54,67,-34,56,-65,57,-67,89,-100};
    int a =12;
    positiveInteger(arr,a);
    // printf("The number of positive integer in arr is %d.\n",positiveInteger(arr,a));

    
    return 0;
}