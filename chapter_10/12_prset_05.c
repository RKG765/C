// Write a program to modify a file contaning an integer to double it's value.

#include<stdio.h>

int main(){
    FILE *ptr;
    FILE *ptr1;
    int a;
    ptr = fopen("prset_05.txt","r");
    ptr1 =fopen("prset_05_1.txt","w");
    fscanf(ptr,"%d",&a);
    fprintf(ptr1,"%d",a*2);
    fclose(ptr);
    fclose(ptr1);
    printf("%d is Now doubled in prset_05_1.txt succesfully....",a);
    return 0;
}