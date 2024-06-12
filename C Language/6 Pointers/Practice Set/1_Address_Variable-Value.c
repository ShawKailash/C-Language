/*
    write a program to print the address of avariable
    use this address to get the value of this variable
*/
#include<stdio.h>

int main()
{
    int a=6;
    int *ptr;
    ptr=&a;
    printf("the value of variable a is %d\n",a);
    printf("the address of variable a is %u\n",&a);
    printf("the value of variable a is %d\n",*ptr);
    return 0;
}