/*
    create an array of multiplication table 7 upto 10 (7x10=70)
    use realloc to make id store 15 number (from 7x1 to 7x15)
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr=(int*)malloc(10*sizeof(int));
    for(int i=0;i<10;i++)
    {
        ptr[i]=7*(i+1);
        printf("the value of 7 x %d = %d\n",i+1,ptr[i]);
    }
    ptr=realloc(ptr,15*sizeof(int));
    printf("\nafter realloc\n\n");
    for(int i=0;i<15;i++)
    {
        ptr[i]=7*(i+1);
        printf("the value of 7 x %d = %d\n",i+1,ptr[i]);
    }
    return 0;
}