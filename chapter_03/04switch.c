#include<stdio.h>

int main(){
    // Switch case
    int rating;
    printf("Enter your number(1-5):");
    scanf("%d",&rating);
    switch (rating)
    {
    case 1:
        printf("You rated:");
        printf("Wrost\n");
        printf("Thanks for your rating\n");
        break;
    case 2:
        printf("You rated:");
        printf(" Too Bad\n");
        printf("Thanks for your rating\n");
        break;
    case 3:
        printf("You rated:");
        printf("Good\n");
        printf("Thanks for your rating\n");
        break;
    case 4:
        printf("You rated:");
        printf("Very Good\n");
        printf("Thanks for your rating\n");
        break;
    case 5:
        printf("You rated:");
        printf("Excellent\n");
        printf("Thanks for your rating\n");
        break;
    default:
        printf("Invalid Number.\n");
        printf("Please Enter a valid number.\n");
        break;
    }
    return 0;
}