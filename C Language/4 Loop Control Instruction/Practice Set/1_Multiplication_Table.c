/*
    write a program to print multiplication
    table of given number n
*/
#include<stdio.h>

int main()
{
    int n;
    printf("enter the number is\n");
    scanf("%d",&n);
    printf("multiplication table\n");
    for(int i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}
