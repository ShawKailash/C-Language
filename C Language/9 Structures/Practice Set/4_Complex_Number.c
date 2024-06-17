/*
    write a program with a structure representing a complex number
*/
#include<stdio.h>
#include<string.h>
struct complex
{
    char name[20];
    int rank;
    float salary;
};
void show(struct complex comp)
{
    printf("name is %s\n",comp.name);
    printf("rank is %d\n",comp.rank);
    printf("salary is %f\n",comp.salary);
};
int main()
{
    struct complex comp;
    strcpy(comp.name,"kailash");
    comp.rank=4;
    comp.salary=6789876.5678;
    show(comp);
    return 0;
}