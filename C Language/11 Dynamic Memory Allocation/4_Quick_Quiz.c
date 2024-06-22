/*
    write a program to create an array of size n using
    calloc where n is an inter entered by the user
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("enter the integer number is ");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("enter the value of %d element\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("the value of %d element is %d\n",i,ptr[i]);
    }
    return 0;
}