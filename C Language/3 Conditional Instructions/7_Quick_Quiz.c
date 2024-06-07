/*
    write a program to find grade of a student
    given his marks based on bellow:
    91 t0 100 ->A
    81 to 90 ->B
    71 to 80 ->C
    61 to 70 ->D
    51 to 60 ->E
    <50 ->Fail
*/
#include<stdio.h>

int main()
{
    int num;
    printf("enter the number is \n");
    scanf("%d",&num);
    if(num>=91 && num<=100)
    {
        printf("grade A");
    }
    else if(num>=81 && num<=90)
    {
        printf("grade B");
    }
    else if(num>=71 && num<=80)
    {
        printf("grade C");
    }
    else if(num>=61 && num<=70)
    {
        printf("grade D");
    }
    else if(num>=51 && num<=60)
    {
        printf("grade E");
    }
    else
    {
        printf("fail");
    }
    return 0;
}