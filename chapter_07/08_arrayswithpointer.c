#include<stdio.h>

float percentage(int *ptr,int a){
    int add = 0;
    for (int i = 0; i <a; i++)
    {
        printf("The value of add is %d.\n",add);
        add += *(ptr);
    }
    return (float) (add*100)/500;
}
int main(){
    int marks[5];
    int *mar = &marks[0];
    for(int i=0; i<5;i++){
        printf("Enter the marks of subject %d.",i+1);
        scanf("%d",mar);
        mar++;
    }
    for(int i=0;i<5;i++){
        printf("Marks of subject %d is %d.\n",i+1,marks[i]);
    }
    printf("Total percentage is %.2f.\n",percentage(marks,5));
    return 0;
}