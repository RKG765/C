#include<stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);


int main(){
    int a=4,b=12;
    printf("The value of a is b before swap is %d and %d.\n",a,b);
    wrong_swap(a,b);
    printf("The value of a and b after wrong_swap function is %d and %d.\n",a,b);
    swap(&a,&b);
    printf("The value of a and b after swap function is %d and %d.\n",a,b);
    return 0;
}
void wrong_swap(int a, int b){
    int new;
    a= new;
    a =b;
    b= new;

}

void swap(int *a, int *b){
    int new;
    new=*a;
    *a=*b;
    *b=new;
    printf("\nCall by refrence\n");

}
