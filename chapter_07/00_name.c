#include<stdio.h>

int main(){
    int i;
    printf("Enter the number (+1) of your name:");
    scanf("%d",&i);
    char n[30];

    for (int l = 0; l<i; l++)
    {
        printf("Enter Your names characters: ");
        scanf("%c",&n[l]);
    }
    printf("Your name is :\n");
    
    for (int k = 0; k < i; k++)
    {

        printf("%c",n[k]);
    }
    
    return 0;
}