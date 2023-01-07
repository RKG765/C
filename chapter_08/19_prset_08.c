#include<stdio.h>
// Write a program to cheak weather a given character is present in a strein or not.
int present(char s[],char c){
    int count = 0;
    char *ptr = s;
    while (*ptr!='\0')
    {
        ptr++;
        count++;
        if (*ptr!=c)
        {
            continue;
        }
        else if(*ptr ==c)
        {
            printf("%c is present in the string at %d",c,count);
            break;
        }
        
    }
    printf("It is not present in the given string.\n");
    return 0;
    
}
int main(){
    char st[] = "This is my house this only belongs to me but i don't expect something from someone exception is something.";
    char cha;
    printf("Enter a charcater: ");
    scanf("%c",&cha);
    present(st,cha);
    
    return 0;
}