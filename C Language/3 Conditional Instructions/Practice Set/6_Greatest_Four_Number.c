/*
    write a program to find greatest of four number
    entered by the user
*/
#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("enter the number\n");
    scanf("%d",&a);
    printf("enter the number\n");
    scanf("%d",&b);
    printf("enter the number\n");
    scanf("%d",&c);
    printf("enter the number\n");
    scanf("%d",&d);
    if(a>b && a>c && a>d)
    {
        printf("the value of a is %d",a);
    }
    else if(b>a && b>c && b>d)
    {
        printf("the  value of b is %d",b);
    }
    else if(c>a && c>b && c>d)
    {
        printf("the value of c is %d",c);
    }
    else
    {
        printf("the value of d is %d",d);
    }
    return 0;
}