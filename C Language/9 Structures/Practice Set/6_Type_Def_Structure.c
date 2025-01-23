/*
    write problem 5 structure using typedef keyword
*/
#include<stdio.h>
#include<string.h>
typedef struct keyword
{
    char name[20];
    int code;
    float salary;
}key;
void show(key k1)
{
    printf("name is %s\n",k1.name);
    printf("code is %d\n",k1.code);
    printf("salary is %f\n",k1.salary);
};
int main()
{
    key k;
    strcpy(k.name,"kailash");
    k.code=1;
    k.salary=23489.432;
    show(k);
    return 0;
}
