#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("write.txt","w");
    int d =2032442442;
    char s[] = "\nHii,How are you!\n";
    fprintf(ptr,"%d\n",d);
    fprintf(ptr,"Thanks!");
    fclose(ptr);
    FILE *fptr;
    fptr = fopen("readme.txt","a");
    fprintf(fptr,"%s",s);
    return 0;
}