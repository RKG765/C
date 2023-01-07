#include<stdio.h>
struct student{
    char name[40];
    int roll;
    char session;
};
int main(){
    struct student s[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the name of student: ");
        gets(s[i].name);
        printf("Enter Roll-Number of student %s: ",s[i].name);
        scanf("%d",&s[i].roll);
        printf("Enter Session of student %s : ",s[i].name);
        scanf("%c",&s[i].session);
        fflush(stdin);
    }

    int roll;
    printf("Enter your Roll-number: ");
    scanf("%d",&roll);
    fflush(stdin);
    if (roll==s[0].roll){
            printf("Name:%s\nRoll:%d\nSession:%c\n",s[0].name,s[0].roll,s[0].session);
    }
    else if (roll==s[1].roll){
            printf("Name:%s\nRoll:%d\nSession:%c\n",s[1].name,s[1].roll,s[1].session);
    }
    else if (roll==s[2].roll){
            printf("Name:%s\nRoll:%d\nSession:%c\n",s[2].name,s[2].roll,s[2].session);
    }
    else
    {
        printf("Enter a valid roll-number.\n");
    }
    
    


    
    

    return 0;
}