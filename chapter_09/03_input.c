#include<stdio.h>
struct employee{
    char name[30];
    float salary;
    char department[30];
    int code; 
};

int main(){
    struct employee e1,e2,e3;
    printf("Enter the name of employee 1: ");
    gets(e1.name);
    printf("Enter the salary of employee 1: ");
    scanf("%f",&e1.salary);
    printf("Enter the department of employee 1: ");
    scanf("%s",e1.department);
    printf("Enter the code for employee 1: ");
    scanf("%d",&e1.code);  
    fflush(stdin);

    printf("Enter the name of employee 2: ");
    gets(e2.name);
    printf("Enter the salary of employee 2: ");
    scanf("%f",&e2.salary);
    printf("Enter the department of employee 2: ");
    scanf("%s",e2.department);
    printf("Enter the code for employee 2: ");
    scanf("%d",&e2.code); 
    fflush(stdin); 

    printf("Enter the name of employee 3: ");
    gets(e3.name);
    printf("Enter the salary of employee 3: ");
    scanf("%f",&e3.salary);
    printf("Enter the department of employee 3: ");
    scanf("%s",e3.department);
    printf("Enter the code for employee 3: ");
    scanf("%d",&e3.code);
    fflush(stdin);
    int a;
    printf("Enter the employee code: ");  
    scanf("%d",&a);
    if (a>03||a<=00)
    {
        printf("Please,Enter a valid employee code.");
    }
    
    else if (a==01)
    {
        printf("Code:%d\nName:%s\nDepartment:%s\nSalary:%.2f\n",e1.code,e1.name,e1.department,e1.salary);
    }
    else if (a==02){
        printf("Code:%d\nName:%s\nDepartment:%s\nSalary:%.2f\n",e2.code,e2.name,e2.department,e2.salary);
    }
    else if (a==03){
        printf("Code:%d\nName:%s\nDepartment:%s\nSalary:%.2f\n",e3.code,e3.name,e3.department,e3.salary);
    }
    
       
    return 0;
}