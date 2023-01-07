// Write a strucuture capable of storing date and Write a function to compare those dates.
// question 10 is same by using typedef keyword
// 

#include<stdio.h>
typedef struct date{
    int date;
    int mont;
    int year;
}date;
void display(date d);
void compDate(date d1,date d2);
int main(){
    date a={23,7,2003};
    date b ={23,7,2003};
    display(a);
    display(b);
    compDate(a,b);
    
    return 0;
}

void display(date d){
    printf("Date/Month/Year: %d/%d/%d\n",d.date,d.mont,d.year);
}

void compDate(date d1,date d2){
    if (d1.year>d2.year){
        printf("%d/%d/%d",d1.date,d1.mont,d1.year);
    }
    else if (d1.year==d2.year)
    {
        if (d1.mont<d2.mont)
        {
            printf("%d/%d/%d",d2.date,d2.mont,d2.year);
        }
        else if(d1.mont==d2.mont){
            if (d1.date>d2.date)
            {
                printf("%d/%d/%d",d1.date,d1.mont,d1.year);
            }
            else if(d1.date==d2.date)
            {
                printf("These dates are same.");
            }
            else
            {
                printf("%d/%d/%d",d2.date,d2.mont,d2.year);
            }
        }
        else
        {
            printf("%d/%d/%d",d1.date,d1.mont,d1.year);
        }
        }
    else {
        printf("%d/%d/%d",d2.date,d2.mont,d2.year);
        }
}
