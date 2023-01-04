// Create an array of 3x10 containing multiplication table of the 2,7,9 respectively.
// also with user input.

#include<stdio.h>
void mulTable(int ptr[]){
    printf("The multiplication table of %d is:\n",ptr[0]);
    for (int j = 1; j <(11); j++)
        {
            printf("%d X %d is %d\n",ptr[0],j,ptr[0]*j);
        }
        printf("***************\n");
    

}

int main(){
    int arr[3][10];
    for (int i = 0; i < 3; i++)
    {
        printf("Input the number %d ",i+1);
        scanf("%d",&arr[i]);
    }
    mulTable(arr[0]);
    mulTable(arr[1]);
    mulTable(arr[2]);
    // printf("%d",arr[2]); It will not show real value.
    return 0;
}