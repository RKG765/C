#include<stdio.h>
#include<string.h>
// Write a function slice() to slice a string.It should change the orignal string such that it is now slice string.Take m and n as the start and ending position of the slice.
void slice(char ptr[],int start,int end){
    char slicestr[30];
    strcpy(slicestr,ptr);
    for (int i = start; i < (end+1); i++)
    {
        printf("%c",slicestr[i]);
    }
}
void slice2(char *ptr ,int m,int n){
    int i =0;
    while(m+i<n){
        ptr[i] = ptr[i+m-1];
        i++;
    }
    ptr[i] = '\0';
}

int main(){
    char str[99];
    printf("Enter a string\n :");
    gets(str);
    int m = printf("Enter the star slice point:");
    scanf("%d",&m);
    int n = printf("Enter the end slice point:");
    scanf("%d",&n);
    slice(str,m,n);
    
    
    return 0;
}