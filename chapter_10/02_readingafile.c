#include<stdio.h>

int main(){
    FILE *fr;
    char ch[20];
    char ch2[20];
    fr = fopen("name.txt","r");
    fscanf(fr,"%s",&ch);
    fscanf(fr,"%s",&ch2);
    fclose(fr);
    printf("%s",ch);
    printf("%s",ch2);
    
    
    return 0;
}