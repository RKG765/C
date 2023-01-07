// Write a function named sumvector which returns the sum of two vectors passed to it.The vectors must be two dimensional.

#include<stdio.h>

// typedef struct sumVector{
//     int x1,y1,x2,y2;
// }svec;

void sumVector(int x1,int y1,int x2,int y2){
    int sum1,sum2;
    sum1 = x1+x2;
    sum2 = y1+y2;
    printf("Sum of vectors (%dx+%dy)+(%dx+%dy)=(%dx+%dy)",x1,y1,x2,y2,sum1,sum2);
}

int main(){
    int k1,l1,k2,l2;
    printf("Enter x1 value:");
    scanf("%d",&k1);
    printf("Enter y1 value:");
    scanf("%d",&l1);
    printf("Enter x2 value:");
    scanf("%d",&k2);
    printf("Enter y2 value:");
    scanf("%d",&l2);
    sumVector(k1,l1,k2,l2);

    return 0;
}