#include<stdio.h>
// Failure but will be corrected.
// w.r.t tym.

int main(){
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    switch (marks)
    {
    case 1:
        
        {
        (marks>=90<=100);
            printf("Your Gradeis:A\n");
            printf("Your marks is:%d\n",marks);
        }
        break;
    case 2:
        {
        (marks>=80<90);
        
            printf("Your Gradeis:B\n");
            printf("Your marks is:%d\n",marks);
        }
        break;

    case 3:
        if (marks>=70<80)
        {
            printf("Your Gradeis:C\n");
            printf("Your marks is:%d\n",marks);
        }
        break;
    case 4:
        if (marks>=60<70)
        {
            printf("Your Gradeis:D\n");
            printf("Your marks is:%d\n",marks);
        }
        break;
    case 5:
        if (marks<60)
        {
            printf("Your Gradeis:F\n");
            printf("Your marks is:%d\n",marks);
        }
        break;
    default:
        printf("Enter a valid number.");
        break;
    }
    return 0;
}