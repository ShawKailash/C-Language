#include<stdio.h>
#include<string.h>
struct employee
{
    char name[20];
    int code;
    float salary;
};
void show(struct employee emp)
{
    printf("the name of employee is %s\n",emp.name);
    printf("the code of employee is %d\n",emp.code);
    printf("the salary of employee is %f\n",emp.salary);
    emp.code=78;
}
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    strcpy(ptr->name,"kailash");
    ptr->code=101;
    ptr->salary=5678.78;
    show(e1);
    printf("the code of employee is %d",e1.code);
    return 0;
}