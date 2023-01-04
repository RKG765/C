#include<stdio.h>

int main(){
    int a,i=130;
    printf("Enter a number:");
    scanf("%d\n",&a);
    do{
        printf("The value is:%d\n",a);
        if (a==128){
            break;
        }
        a++;
    }while (a<i);
    return 0;
}