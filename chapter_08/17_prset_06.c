#include<stdio.h>
// Write a program to decrypt the string encrypted using decrypt. 
void decrypt(char dec[]){
    char *ptr = dec;
    while(*ptr!='\0'){
        *ptr = *ptr-1;
        ptr++;
    }
}

int main(){
    char dec[]= "zpv!bsf!hpjoh!up!cf!ljmmfe'";
    decrypt(dec);
    printf("The decrypted string is : %s",dec);
    
    return 0;
}