#include<stdio.h>
struct stud
{
    char name[30];
    int roll;    
    char sec;
};


int main(){
    struct stud s1 ;
    struct stud *ptr;
    ptr = &s1;

    (*ptr).roll = 237;
    strcpy((*ptr).name,"Zero");
    printf("Name of student is %s.\n", (*ptr).name);
    // printf("Address of sudent variable is %u.\n",ptr);
    // printf("The address of the student variable is %u.\n",&s1.name);
    ptr->sec = 'S';
    printf("Section:%c",ptr->sec);

    return 0;
}