// Write a program to generate the multiplication table of the given number in text format.Make sure that file is readable and well formated.
#include<stdio.h>
int mul(int a);

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    // int mu;
    // mu = mul(a);
    FILE *ptr;
    ptr = fopen("prset_02.txt","w");
    // fprintf(ptr,"%d",mu);
    for (int i = 1; i < 11; i++)
    {
        fprintf(ptr,"%dX%d=",a,i);
        fprintf(ptr,"%d\n",a*i);
    }
    fclose(ptr);
    
    
    return 0;

}

int mul(int a){
    for (int i = 0; i < 11; i++)
    {
        printf("%d X %d = %d\n",a,i,a*i);
    }
    return 0;
}