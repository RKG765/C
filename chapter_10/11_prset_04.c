// Take name and salary of two employees as an input from the user write them to a text file in a following format:
// name1,salary1
// name2,salary2

#include<stdio.h>
#include<string.h>
typedef struct employee{
    char name[30];
    int salary;
}emp;
int main(){
    emp e1,e2;
    printf("Enter name of employee1: ");
    gets(e1.name);
    printf("Enter the salry for employee1: ");
    scanf("%d",&e1.salary);
    fflush(stdin);
    printf("Enter name of employee2: ");
    gets(e2.name);
    printf("Enter the salry for employee2: ");
    scanf("%d",&e2.salary);
    FILE *ptr;
    ptr = fopen("prset_04.txt","w");
    fprintf(ptr,"%s,%d",e1.name,e1.salary);
    fprintf(ptr,"\n%s,%d",e2.name,e2.salary);
    fclose(ptr);
    
    return 0;
}