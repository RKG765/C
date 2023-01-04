#include<stdio.h>
#include<stdlib.h>

void change(int a);
int main(){
    int a =133;
    printf("The value of a is %d\n",a);
    change(a);
    printf("The changed value of a is %d\n",a);
    
    return 0;
}
void change(int a){
    // terally change the a in the main function because this a is defined here only for here. it can't change the a in main function because these two are totaly different.
    a =15;
    return a;
}