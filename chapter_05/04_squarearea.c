#include<stdio.h>
#include<math.h>

int area(int len);

int main(){
    int len,a;
    printf("Enter Length:");
    scanf("%d",&len);
    a= area(len);
    printf("The area of square is %d.\n ",a);
    
    return 0;
}

int area(int len){
    int area;
    area = len*len;
    return area;
}