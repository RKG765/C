#include<stdio.h>
#include<math.h>

int main(){
    int a;
    printf("Enter the lenght of square:");
    scanf("%d",&a);
    printf("The area of square with side %d unit is %f unit sq.\n",a,pow(a,2));
    
    return 0;
}