/*
    write a pogram to print the value of a variable
    i by using "pointer to pointer" type of variable
*/
#include<stdio.h>

int main()
{
    int i=56;
    int *ptr;
    int **ptr_ptr;
    ptr=&i;
    ptr_ptr=&ptr;
    printf("the value of i is %d\n",**ptr_ptr);
    return 0;
}
