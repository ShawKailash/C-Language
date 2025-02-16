/*
    write a program to print n natural numbers in reverse order
*/
#include<stdio.h>

int main()
{
    int n;
    printf("enter the value of n is \n");
    scanf("%d",&n);
    for(int i=n;i;i--)
    {
        printf("the value of i is %d\n",i);
    }
    return 0;
}
