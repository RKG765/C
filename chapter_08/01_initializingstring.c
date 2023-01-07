#include<stdio.h>
int main(){
    char str[] = {'R','A','J','\0'};   // Null character is imporatant '\0'.
    char *ptr = str;
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%c",str[i]);
    // }
    while (*ptr != '\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    
    return 0;
}