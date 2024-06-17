/*
    create a structure representing a bank account of a customer
    what field did you use and why?
*/
#include<stdio.h>
struct bankdetail
{
    char name[20];
    char bank_name[40];
    int acc_no[10];
    char ifsc_code[11];
    float balance[10];
};
int main()
{
    struct bankdetail bk1;
    printf("enter your name is ");
    scanf("%s",bk1.name);
    printf("enter your bank name is ");
    scanf("%s",bk1.bank_name);
    printf("enter your account number is ");
    scanf("%d",bk1.acc_no);
    printf("enter your ifsc code is ");
    scanf("%s",bk1.ifsc_code);
    printf("enter your balance is ");
    scanf("%f",bk1.balance);
    return 0;
}