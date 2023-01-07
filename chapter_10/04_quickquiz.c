#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr = fopen("king.txt","r");
    if (ptr == NULL){
        printf("File doesn't exists.\n");
    }
    else{
        fscanf(ptr,"%d",&num);
        fclose(ptr);
        printf("The value of num is %d.\n",num);
    }
    return 0;
}