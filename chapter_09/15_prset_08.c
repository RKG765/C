// Create a structure representing the bank account of a custumer.

#include<stdio.h>
#include<string.h>
typedef struct custumer{
    char bank_name[20];
    char bank_branch[20];
    char holder_name[30];
    int acc_number;
    // char holder_address[50];
    float holder_balance;
}bA;
void newAccount(bA s1);
void accDetails(bA s2);
void withdrawl(bA s3);
void deposit(bA s4);
int main(){
    bA c1;
    printf("****Welcome To Application****\n");
    printf("Bank name: ");
    gets(c1.bank_name);
    printf("Branch: ");
    gets(c1.bank_branch);
    printf("Name: ");
    gets(c1.holder_name);
    printf("Account No.(9-12): ");
    scanf("%d",&c1.acc_number);
    printf("Balance:Rs. ");
    scanf("%f",&c1.holder_balance);
    printf("****Thank You****\n");
    // printf("For Details")
    return 0;
};

void accDetails(bA s2){
    printf("Bank/Branch:%s/%s\nAccount Holder Name:%s\nAccount No.:%d\nBalance:%.5f\n",s2.bank_name,s2.bank_branch,s2.holder_name,s2.acc_number,s2.holder_balance);
}