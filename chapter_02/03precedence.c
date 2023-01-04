#include<stdio.h>

int main(){
    // when only * or - is present.In abesence of parenthesis.
    float x=4,y=5;
    // printf("The value of 3x-8y is %d.",3*x-8*y);
    // when 1st priority * or / both are present in the same question.
    // It is done by parenthesis().
    // printf("The value of 8x/12y is %f", 8*x/12*y); //It's answer should be 0.533333 but here it is 13.33334 that's why we use () this
    printf("The value of 8x/12y is %f", (8*x)/(12*y));

    return 0;
}