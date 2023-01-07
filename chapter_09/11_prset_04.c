// Write a program to illustrate the use of arrow operator.(->)

#include<stdio.h>
#include<string.h>
typedef struct student{
    int roll;
    char name[32];
    float num;
}s;
int main(){
    s s1;
    s *ptr;
    ptr = &s1;
    ptr->num=234.67;
    ptr->roll=23;
    strcpy(ptr->name,"Rajesh");
    printf("Name: %s\nRoll: %d\nMarks: %.3f\n",ptr->name,ptr->roll,ptr->num);

    return 0;
}