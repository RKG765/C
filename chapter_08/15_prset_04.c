#include<stdio.h>
// Write your own version of strcpy() function from string.h. 
int strcopy(char *real,char *copy){
    int i = 0;
    int count = i+1;
    while(real[i]!='\0'){
        copy[i]=real[i];
        i++;
    }
    copy[i]= '\0';
}

int main(){
    char real[30] ="How are you?";
    char copy[31];
    strcopy(real,copy);
    printf("The contents of copy are \n%s",copy);

    
    return 0;
}