/*
    write a program to demostrate the usage of free() with malloc() 
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr1;
    int *ptr2;
    ptr1=(int*)malloc(6*sizeof(int));
    for(int i=0;i<6;i++)
    {
        ptr2=(int*)malloc(60*sizeof(int));
        printf("enter the value of %d element\n",i);
        scanf("%d",&ptr1[i]);
        free(ptr2);
    }
    for(int i=0;i<6;i++)
    {
        printf("the value of %d element is %d\n",i,ptr1[i]);
    }
    return 0;
}
