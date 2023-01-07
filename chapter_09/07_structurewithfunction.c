#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    char sect;
    char name[20];
};
void show(struct student stud);
int main(){
    struct student s1;
    struct student *ptr;
    ptr =&s1;
    ptr->roll=13;
    strcpy(ptr->name,"Zenos");
    ptr->sect='A';

    show(s1);

    return 0;
}

void show(struct student stud){
    printf("Name of student is: %s.\n",stud.name);
    printf("Roll is: %d\n",stud.roll);
    printf("Section is: %c\n",stud.sect);


}