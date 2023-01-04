#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    // it will run only when the given condition is true.
    while (a<=50)
    {
        printf("%d\n",a);
        a++;
    }
    
    return 0;
}