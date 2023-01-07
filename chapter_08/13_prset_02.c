#include<stdio.h>
// Write your own version of strlen function from string.h
int strleng(char var[]){
    int len = 0;
    int i = 0;
    while (var[i]!='\0')
    {
        len +=1;
        i++;
    }
    
    return len;
    
}
int main(){
    char ptr[30] ="This is my car.";
    printf("The length of ptr is %d\n",strleng(ptr));

    
    return 0;
}