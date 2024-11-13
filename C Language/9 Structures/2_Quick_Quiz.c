/*
    write a program to store the details of 3 employees from
    user defined data use the structure declared above
*/
#include<stdio.h>
#include<string.h>
struct employee
{
    char name[20];
    int code;
    float salary;
};
int main()
{
    struct employee e1,e2,e3;
    printf("enter the name of e1 is ");
    scanf("%s",e1.name);
    printf("enter the code of e1 is ");
    scanf("%d",&e1.code);
    printf("enter the salary of e1 is ");
    scanf("%f",&e1.salary);
    printf("\n");
    printf("enter the name of e2 is ");
    scanf("%s",e2.name);
    printf("enter the code of e2 is ");
    scanf("%d",&e2.code);
    printf("enter the salary of e2 is ");
    scanf("%f",&e2.salary);
    printf("\n");
    printf("enter the name of e3 is ");
    scanf("%s",e3.name);
    printf("enter the code of e3 is ");
    scanf("%d",&e3.code);
    printf("enter the salary of e3 is ");
    scanf("%f",&e3.salary);
    return 0;
}
