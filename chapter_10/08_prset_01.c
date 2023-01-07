// Write a program to read 3 integers from a file.
#include<stdio.h>

int main(){
    FILE *ptr;
    int a,b,c;
    int a1,b1,c1;
    printf("Enter Number1: ");
    scanf("%d",&a);
    printf("Enter Number2: ");
    scanf("%d",&b);
    printf("Enter Number3: ");
    scanf("%d",&c);
    ptr = fopen("prset01.txt","w");
    fprintf(ptr,"%d\n%d\n%d",a,b,c);
    fclose(ptr);
    FILE *ptr1;
    ptr1 = fopen("prset01.txt","r");
    fscanf(ptr1,"%d",&a1);
    fscanf(ptr1,"%d",&b1);
    fscanf(ptr1,"%d",&c1);
    fclose(ptr1);
    printf("Number 1: %d\n",a1);
    printf("Number 2: %d\n",b1);
    printf("Number 3: %d\n",c1);
    // fprintf(ptr,"d\n",b);
    // fprintf(ptr,"d\n",c);

    return 0;
}