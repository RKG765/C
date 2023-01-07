// Create a "" string and print it's content.
#include<stdio.h>

int main(){
    char str[] = "Zero";     //IN this case compiler itself adds a null character.
    for(int i =0;i<4;i++){
    printf("%c",str[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The address of str[%d] is %c is %u.\n",i,str[i],&str[i]);
    }
    
    
    
    // printf("The address of 5th element is %u.\n",str[4]);
    return 0;
}