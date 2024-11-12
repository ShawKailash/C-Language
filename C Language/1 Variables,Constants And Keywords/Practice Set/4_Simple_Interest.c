/*
    write a program to calculate simple interest for a set of values
    representing principal no of year and rate of interest
*/
#include<stdio.h>

int main()
{
    int principal,rate,year;
    printf("enter the value of principal is \n");
    scanf("%d",&principal);
    printf("enter the value of rate is \n");
    scanf("%d",&rate);
    printf("enter the value of year \n");
    scanf("%d",&year);
    int simpleinterest=(principal*rate*year)/100;
    printf("the value of simple interest is %d",simpleinterest);
    return 0;
}
