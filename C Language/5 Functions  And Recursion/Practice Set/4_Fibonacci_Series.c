/*
    wrie a program using recursion to calculate nth element of fibonacci series
*/
#include<stdio.h>

int main()
{
    int n,a=0,b=1,c;
    printf("enter the number n is\n");
    scanf("%d",&n);
    printf("fibonacci number is\n");
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
