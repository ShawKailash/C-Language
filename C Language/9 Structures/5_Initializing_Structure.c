#include<stdio.h>
struct employee
{
    char name[20];
    int code;
    float salary;
};
int main()
{
    struct employee kailash={"kailash",100,34.67};
    printf("name is %s\n",kailash.name);
    printf("code is %d\n",kailash.code);
    printf("salary is %f\n",kailash.salary);
    return 0;
}
