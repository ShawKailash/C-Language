/*
    try these operations on another variable by
    creating pointers in a separate program
    demonstrate all the four operations
*/
#include<stdio.h>

int main()
{
    int i=5;
    int *ptr=&i;
    printf("%d\n",*ptr);
    printf("%d\n",*ptr+1);
    printf("%d\n",*ptr-1);
    printf("%d\n",*ptr*1);
    printf("%d\n",*ptr/1);
    return 0;
}