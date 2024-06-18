#include<stdio.h>
#include<string.h>
typedef struct employee
{
    char name[20];
    int code;
    float salary;
}emp;
void show(emp emp1)
{
    printf("the name of employee is %s\n",emp1.name);
    printf("the code of employee is %d\n",emp1.code);
    printf("the salary of employee is %f\n",emp1.salary);
}
int main()
{
    emp e1;
    emp *ptr;
    ptr=&e1;
    strcpy(ptr->name,"kailash");
    ptr->code=101;
    ptr->salary=5678.78;
    show(e1);
    return 0;
}