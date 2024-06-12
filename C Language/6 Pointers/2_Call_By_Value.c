#include<stdio.h>
int sum(int a,int b);

int main()
{
    int a=4,b=5;
    printf("the value of a and b is %d and %d\n",a,b);
    printf("the value of a+b is %d\n",sum(a,b));
    printf("the value of a and b after function call is %d and %d\n",a,b);
    return 0;
}
int sum(int a,int b)
{
    int c;
    c=a+b;
    a=455;
    b=678;
}