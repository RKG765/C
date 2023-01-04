// Write a program to create an array of 10 integers and store the multiplication table of 5 init. 
// and also taking input from the user and passing it to a function.

#include<stdio.h>

// void tables (int arr[],int a,int b){
//     for (int i = 1; i < a+1; i++)
//     {
//         printf("5 X %d is %d\n",i+1,b*arr[i]);
//     }
// }


int main(){
    int arr[10] ={1,2,3,4,5,6,7,8,9,10};
    int line = 10;
    int table = 5;
    for (int i = 0; i < 10; i++)
    {
        printf("5 X %d is %d\n",i+1,arr[i]);
    }
    
    // printf("Input the number:");
    // scanf("%d",&table);
    // tables(arr,line,table);

    
    return 0;
}