/*
    write a program to illustrate the use of arrow operator in c
*/
#include<stdio.h>
#include<string.h>

struct arrowoperator
{
    char name[20];
    int code;
    float salary;
};
int main()
{
    struct arrowoperator ao;
    struct arrowoperator *ptr;
    ptr=&ao;
    strcpy(ptr->name,"kailash");
    ptr->code=10;
    ptr->salary=123456.432;
    printf("the name is %s\n",ao.name);
    printf("the code number is %d\n",ao.code);
    printf("the salary is %f\n",ao.salary);
    return 0;
}
