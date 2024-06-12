/*
    write a program having a variable i print the address
    of i pass this variable to a function and print its
    address are these address same ? why?
*/
#include<stdio.h>
void printadd(int a)
{
    printf("the address of variable a is %u\n",&a);
}

int main()
{
    int i=4;
    printf("the value of variable i is %d\n",i);
    printadd(i);
    printf("the address of variable i is %u\n",&i);
        return 0;
}