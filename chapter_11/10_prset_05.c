// Create an array of multiplication table of 7 upto 10.(7x1=7 to 7x10=70).
// Use realloc to make it store 15 number.
#include<stdio.h>

#include<stdlib.h>

//#include<string.h>
void table(int a,int *ptr){
    for (int i = 1; i < 11; i++)
    {
        ptr[i] = (a*i);
    }
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n",a,i,ptr[i]);
    }
}

int main(){
    int *ptr;
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    ptr = (int *)malloc(10*sizeof(int));
    table(a,ptr);
    
    
    return 0;
}