#include<stdio.h>

int main(){
    int a;
    printf("Enter your number:");
    scanf("%d",&a);

    if(a%2==0){
        printf("%d is Even.\n",a);
    }
    else if(a%2!=0){
        printf("%d is odd.\n",a);
    }
    else{
        printf("Please,Enter a valid number.");
    }
    
    return 0;
}