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
    struct employee e1;
    strcpy(e1.name,"kailash");
    e1.code=1;
    e1.salary=100000.80;
    printf("%s\n",e1.name);
    printf("%d\n",e1.code);
    printf("%.2f\n",e1.salary);
    return 0;
}
