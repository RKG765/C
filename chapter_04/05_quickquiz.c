#include<stdio.h>

int main(){
    int n;
    printf("Enter the number(>0):");
    scanf("%d\n",&n);
    for(int i=n; i; i--){
        printf("The value of i is:%d\n",i);
    }
    return 0;
}