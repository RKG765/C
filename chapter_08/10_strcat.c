#include<stdio.h>
#include<string.h>

int main(){
    char a[22] = "Hey,";
    char b[] = "how are you.";
    strcat(a,b); // Here it will add "how are you." to char a[]
    printf("The new a will be \n %s\n",a);
    
    printf("The length of a is %d.\n",strlen(a));
    printf("The length of b is %d.\n",strlen(b));
    return 0;
}