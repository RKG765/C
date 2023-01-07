// Write a program to read a file character by character and write it's content twice in a seperate file.

#include<stdio.h>

int main(){
    FILE *ptr;
    FILE *ptr1;
    char get[12];
    char c;
    ptr = fopen("prset_03.txt","r");
    ptr1 = fopen("prset_03_1.txt","w");
    c = fgetc(ptr);
    while (c!=EOF)
    {
        fputc(c,ptr1);
        fputc(c,ptr1);
        c = fgetc(ptr);
    }
    
    fclose(ptr);
    fclose(ptr1);
    
    

    return 0;
}