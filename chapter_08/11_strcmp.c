#include<stdio.h>
#include<string.h>

int main(){
    char p[] = "Hello there,how are you!";
    char r[] = "Hii, I am fine!";
    // printf("The lengths of p and r are %d and %d\n",strlen(p),strlen(r));
    // Here it depends upon the mismatching character place like e comes before i then it will be negative.
    int compare =  strcmp(p,r);
    printf("The compare b/w p and r is %d\n",compare);
    int compare2 = strcmp(r,p);
    printf("The compare b/w r and p is %d\n",compare2);
    
    return 0;
}