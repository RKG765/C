#include<stdio.h>
#include<string.h>

int strLen(char *ptr){
    int len = 0;
    while (*ptr != '\0')
    {
        len +=1;
    }
    
    
    return len;
}

int main(){
    char ptr[30];
    printf("Enter Your Name: ");
    gets(ptr);
    puts(ptr);
    // printf("Number of character is %d.\n",strlen(ptr));
    printf("Number of character is %d.\n",strLen(ptr));

    return 0;
}