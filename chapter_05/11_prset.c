#include<stdio.h>
int fibo(int a);
int main(){
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    printf("The Fibonacci of %d is %d.\n",num,fibo(num));
    
    return 0;
}
int fibo(int a){
    if (a<2 || a==1 ||a==0){
        return a;
    }
    else{
        return fibo(a-1)+fibo(a-2);
    }
    
}