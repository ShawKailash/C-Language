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
    struct employee e;
    int num;
    printf("enter number of employee is ");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        printf("enter the name of e%d is ",i+1);
        scanf("%s",e.name);
        printf("enter the code of e%d is ",i+1);
        scanf("%d",&e.code);
        printf("enter the salary of e%d is ",i+1);
        scanf("%f",&e.salary);
    }
    return 0;
}