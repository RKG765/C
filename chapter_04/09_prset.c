#include<stdio.h>

int main(){
    // program printing multiplication in reverse order.
    int num,mul=10;
    printf("Enter the number:");
    scanf("%d\n",&num);
    for (num,mul; mul; mul--)
    {
        printf("%d x %d = %d\n",num,mul,num*mul);
    }
    
    return 0;
}