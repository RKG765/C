#include<stdio.h>

int main(){
    // By using ASCII-value
    // 97-122 = a-z
    char ch;
    printf("Enter a character\n");
    scanf("%c",&ch);
    if (ch>=97 && ch<=122)
    {
        printf("%c is Lower-Case.\n",ch);
    }
    else
    {
        printf("%c is not a Lower-case.",ch);
    }
    
    return 0;
}