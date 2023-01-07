#include<stdio.h>
// Write a program to count the occurance of the  given character in a string.
int count(char str[],char cha){
    int count = 0;
    char *ptr = str;
    while (*ptr!='\0')
    {
        ptr++;
        if (*ptr==cha)
        {
            count++;
            continue;
        }
    }
    return count;
}
int main(){
    char st[] = "This is my house this only belongs to me but i don't expect something from someone exception is something.";
    char cha;
    printf("Enter a charcater: ");
    scanf("%c",&cha);
    printf("The occurance of cahracter %c is %d.\n",cha,count(st,cha));
    
    return 0;
}