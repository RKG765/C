// Create a 2-d array by taking input from the user.Write a display function to print the content of the 2-d array on the screen.

#include<stdio.h>

void display(int ar[],int a,int b){
    for (int i = 0; i < a; i++)
    {   
        for (int j = 0; j < b; j++)
        {
        printf("The number %d value of %d is %d.\n",i+1,j+1,ar[i,j]);
        }
    }
    
}

int main(){
    int n_a = 2;
    int n_b = 3;
    int arr[n_a][n_b];
    for (int i = 0; i < n_a; i++)
    {   
        for (int j = 0; j < n_b; j++)
        {
        printf("Input number %d value of %d is: ",i+1,j+1);
        scanf("%d",&arr[i][j]);
        }
    }
    display(arr,n_a,n_b);
    
    
    return 0;
}