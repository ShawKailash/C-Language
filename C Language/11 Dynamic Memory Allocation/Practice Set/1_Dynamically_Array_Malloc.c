/*
    write a program to dynamically create an array
    of size 6 capable of storing 6 integers
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr=(int*)malloc(6*sizeof(int));
    for(int i=0;i<6;i++)
    {
        printf("enter the value of %d element\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<6;i++)
    {
        printf("the value of %d element is %d\n",i,ptr[i]);
    }
    return 0;
}
