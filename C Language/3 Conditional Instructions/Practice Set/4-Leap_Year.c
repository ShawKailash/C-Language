/*
    write a program to find whether a year entered by the 
    user is a leap year or nottake year as an input from the user
*/
#include<stdio.h>

int main()
{
    int year;
    printf("enter the year\n");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("it is leap year %d\n",year);
    }
    else
    {
        printf("it is not leap year %d",year);
    }
    return 0;
}
