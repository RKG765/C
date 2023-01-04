/*
Some questions:
1.
*/
#include <stdio.h>

int main()
{
    // Answer of 1st question part-2.
    // int l,b;
    // printf("Value of lenght:\n");
    // scanf("%d", &l);
    // printf("Value of breadth:\n");
    // scanf("%d", &b);
    // printf("Area of rectangle is:\n%d",l*b);
    // answer of 1st question part-1.

    // Answer 2nd question part-2
    float pi = 3.14;
    float r = 7.3;
    float h = 14.3;
    printf("\nThe volume of cylinder is:\n%f", pi * r * h);

    // Answer 2nd question part-1
    printf("\nThe area of circle is:\n%f", pi * r);

    // Answer of 3rd question
    float c = 37.0;
    float v = 1.8;
    int n = 32;
    float cv = c * v;
    printf("\nValue of degree celcius into degree farenhiet is:\n%f", cv + n);

    // Answer of 4th question
    float principle = 1000.0;
    float rate = 0.05;
    float time = 4;
    printf("\nSimple Intrest is:\n%f", principle * rate * time);

    return 0;
}