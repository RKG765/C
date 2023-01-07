// Write the problem 5 using structure typedef keyword.

#include<stdio.h>
typedef struct complex{
    int main;
    int img;
}c;
void display(struct complex r1){
    printf("%d+%di\n",r1.main,r1.img);
}
int main(){
    c c1;
    c *ptr;
    ptr = &c1;
    printf("Enter the real number: ");
    scanf("%d",&ptr->main);
    printf("Enter the Imagenary: ");
    scanf("%d",&ptr->img);
    display(c1);


}