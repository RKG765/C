#include<stdio.h>

int main(){
    // for (int i = 25; i < 50 ||i<99; i++)
    // {
    //     printf("The value:%d\n",i);
    //     if (i==49)
    //     {
    //         continue;
    //     }
        
    // }
    int skip=5;
    int i=0;
    while (i<10)
    {
        i++;
        if (i!=skip)
        {
            continue;
        }
        else{
            printf("%d\n",i);
        }
        
    }
    
    
    return 0;
}