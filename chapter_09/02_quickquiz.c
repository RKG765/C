// Write a program to store the details of 3 employee from user defined data.
#include<stdio.h>
struct employee{
    char name[30];
    float salary;
    char department[30];
    int code; 
};

int main(){
    struct employee worker01;
    strcpy(worker01.name,"Zero");
    worker01.salary= 87124.238; 
    strcpy(worker01.department,"Programing");
    worker01.code=01;

    struct employee worker02;
    strcpy(worker02.name,"Amesh");
    worker02.salary= 57328.64; 
    strcpy(worker02.department,"Software Engeneieer");
    worker02.code=02;

    struct employee worker03;
    strcpy(worker03.name,"Rakesh");
    worker03.salary= 76128.896; 
    strcpy(worker03.department,"Gaming");
    worker03.code=03; 
    printf("The Detiails of Employee are:\n"); 
    printf("Name:%s\nDepartment:%s\nCode:%d\nSalary:%.3f\n",worker01.name,worker01.department,worker01.code,worker01.salary);
    printf("Name:%s\nDepartment:%s\nCode:%d\nSalary:%.3f\n",worker02.name,worker02.department,worker02.code,worker02.salary);
    printf("Name:%s\nDepartment:%s\nCode:%d\nSalary:%.3f\n",worker03.name,worker03.department,worker03.code,worker03.salary);
    return 0;
}