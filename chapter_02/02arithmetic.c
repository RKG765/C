#include<stdio.h>
#include<math.h>

int main(){
    // you can't write a+b = c;
    int a=4,b=3,c;
    c = a%b;
    printf("The value of c is %d",c);
    // Writing some exponetioal operators with the help of <math.h> (double means holding numbers with decimal points..)
    // code will be as follows:
    printf("\nThe value of 4 to the power 2 is :%f",pow(4,2));
    // If you write as below it will turn into  int r = 3;
    int r = 3.9999999999999;
    printf("\nThe value of r is %d",r);
    // Here the question is int r = 3.0/9; then the answer will be 0 because it is int where 0.33333 is demoted to 0.

    printf("\nThe value of r is %f",3.0/9);


    return 0;
}