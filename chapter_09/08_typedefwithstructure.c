#include<stdio.h>
#include<string.h>

typedef struct employee
{
    char name[30];
    int code;
    int salary;
} emp;

int main(){
    // before using typedef

        // struct employee e1;
        // struct employee *ptr;
    
        // ptr =&e1;
    
    // after using typedef
        emp e1;
        emp *ptr;
        ptr=&e1;

    ptr->code =23;
    ptr->salary= 75330;
    strcpy(ptr->name,"Rajesh");
    printf("Name:%s\nCode:%d\nSalary:%d per annum.\n",ptr->name,ptr->code,ptr->salary);

    return 0;
}
