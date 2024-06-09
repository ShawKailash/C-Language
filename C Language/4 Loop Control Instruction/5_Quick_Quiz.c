/*
    write a program to print first n natural numers using do while loop
*/
#include<stdio.h>

int main()
{
    int i=0;
    int n;
    printf("enter the value of n is\n");
    scanf("%d",&n);
    do
    {
        printf("the number is %d\n",i+1);
        i++;
    }while(i<n);
    return 0;
}