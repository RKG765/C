// Create an array of 5 complex numbers created in program 5 and display them with the help of a display function.The values must be taken as an input from the user.
#include<stdio.h>
typedef struct complex{
    int real;
    int img;
}comp;

void display(comp c);

int main(){
    comp num[5];
    for (int i = 0; i < 5; i++)
    {printf("Enter real value %d: ",i+1);
        scanf("%d",&num[i].real);

        printf("Enter imaginary value %d: ",i+1);
        scanf("%d",&num[i].img);};
    for (int i = 0; i < 5; i++)
    {display(num[i]);}
    return 0;
};

void display(comp c){
    printf("*******Complex Numbers********\n");
    printf("The value of real part is %d.\n",c.real);
    printf("The value of imaginary part is %di\n",c.img);
};