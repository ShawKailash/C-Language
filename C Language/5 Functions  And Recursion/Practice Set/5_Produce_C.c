/*
    what will the following line produce in a c program:
    printf("%d %d %d\n",a,++a,a++);
*/
#include<stdio.h>

int main()
{
    int a=3;
    printf("%d %d %d\n",a,++a,a++);
    return 0;
}