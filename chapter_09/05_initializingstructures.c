#include<stdio.h>
struct employee{
    char name[20];
    float salary;
    int code;
};
int main(){
    struct employee e1  = {"Raj Kumar Gupta",72146.095,034};
    printf("The name of Employee is %s,Salary is %.3f,Code is %d.\n",e1.name,e1.salary,e1.code);
    struct employee e2 = {0};
    printf("The name of Employee is %s,Salary is %.3f,Code is %d.\n",e2.name,e2.salary,e2.code);
    struct employee e3 = {"Zero",0};
    printf("The name of Employee is %s,Salary is %.3f,Code is %d.\n",e3.name,e3.salary,e3.code);


    return 0;
}