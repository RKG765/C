#include<stdio.h>

void goodmorning();
void goodafternoon();
void goodnight();
int main(){
    // int time;
    // printf("Enter time:");
    // scanf("%d",&time);
    // if (time>=00 && time<12)
    // {
    //     goodmorning();
    // }
    // else if (time>=12 && time<=4)
    // {
    //     goodafternoon();
    // }
    // else if (time>4 && time<=11)
    // {
    //     goodnight();
    // }
    // else
    // {
    //     printf("Enter a valid time in 24-hrs format.");
    // }
    goodmorning();
    goodafternoon();
    goodnight();
    
    
    return 0;
}

void goodmorning(){
    printf("Good Morning!\n");
}
void goodafternoon(){
    printf("Good Afternoon!\n");
}
void goodnight(){
    printf("Good Night!\n");
}