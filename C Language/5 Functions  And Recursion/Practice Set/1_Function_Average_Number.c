/*
    write a program using function to find average of three number
*/
#include<stdio.h>
float average(int a,int b,int c);

int main()
{
    int a,b,c;
    printf("enter the value of a is\n");
    scanf("%d",&a);
    printf("enter the value of b is\n");
    scanf("%d",&b);
    printf("enter the value of c is\n");
    scanf("%d",&c);
    printf("the value of average is %f",average(a,b,c));
    return 0;
}
float average(int a,int b,int c)
{
    float result;
    result = (float)(a+b+c)/3;
    return result;
}