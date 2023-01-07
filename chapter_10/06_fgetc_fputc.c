#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("character.txt","r");
    // char c =fgetc(ptr);
    printf("The value is %c\n",fgetc(ptr));
    printf("The value is %c\n",fgetc(ptr));
    printf("The value is %c\n",fgetc(ptr));
    printf("The value is %c\n",fgetc(ptr));
    printf("The value is %c\n",fgetc(ptr));
    printf("The value is %c\n",fgetc(ptr));
    fclose(ptr);
    FILE *ptr1;
    ptr1 = fopen("putcdemo.txt","w");
    putc('c',ptr);
    putc('R',ptr);
    putc('A',ptr);
    putc('J',ptr);
    fclose(ptr1);

    return 0;
}