/*
    write a program to create a dynamic
    array of 5 float using malloc()
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    float *ptr;
    ptr=(float*)malloc(5*sizeof(float));
    for(int i=0;i<5;i++)
    {
        printf("enter the value of %d element\n",i);
        scanf("%f",&ptr[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("the value of %d element is %f\n",i,ptr[i]);
    }
    return 0;
}