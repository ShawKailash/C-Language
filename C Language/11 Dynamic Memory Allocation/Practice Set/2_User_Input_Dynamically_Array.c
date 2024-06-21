/*
    user the array in program 1 to store 6
    integers entered by  the user
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,*ptr;
    printf("enter the number is ");
    scanf("%d",&num);
    ptr=(int*)malloc(num*sizeof(int));
    for(int i=0;i<num;i++)
    {
        printf("enter the value of %d element\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<num;i++)
    {
        printf("the value of %d element is %d\n",i,ptr[i]);
    }
    return 0;
}