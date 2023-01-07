#include<stdio.h>
#include<string.h>
struct student
    {
        char name[40];
        int class;
        char section[1];
        int roll;
        float percentMarks;
    };

int main(){
    struct student a1;
    strcpy(a1.name,"Zero");
    a1.class = 10;
    strcpy(a1.section,"B");
    a1.roll = 33;
    a1.percentMarks = 87.9;
    printf("The name of student is %s\nClass:%d(%s)\nRoll No:%d\nMarks(in percentage):%.2f",a1.name,a1.class,a1.section,a1.roll,a1.percentMarks);
    
    
    return 0;
}