/*
    create an array dynamically capable of storing 5 integers
    now use realloc so that it can now store 10 integers
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr=(int*)malloc(5*sizeof(int));
    for(int i=0;i<5;i++)
    {
        printf("enter the value of %d element\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("the value of %d element is %d\n",i,ptr[i]);
    }
    ptr=realloc(ptr,10*sizeof(int));
    for(int i=0;i<10;i++)
    {
        printf("enter the value of %d element\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf("the value of %d element is %d\n",i,ptr[i]);
    }
    return 0;
}
