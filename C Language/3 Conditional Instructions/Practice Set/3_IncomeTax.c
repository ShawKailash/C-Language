/*
    calculate income tax paid by an employee to the government as per
    the slabs mentioned bellow:
    income slab                   tax
    2.5l to 5.0l                   5%
    5.0l to 10.0l                 20%
    above 10.0l                   30%
    note that there is no tax bellow 2.5l take income amount as
    an input from the user
*/
#include<stdio.h>

int main()
{
    float tax =0,income;
    printf("enter your income\n");
    scanf("%f",&income);
    if(income>=250000 && income<=500000)
    {
        tax=tax+0.05*(income-250000);
    }
    if(income>=500000 && income<=1000000)
    {
        tax=tax+0.20*(income-500000);
    }
    if(income>=1000000)
    {
        tax=tax+0.30*(income-1000000);
    }
    printf("your net income tax to be paid by 26th month is %f\n",tax);
    return 0;
}