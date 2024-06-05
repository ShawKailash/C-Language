/*
    write a program to determine whether a number
    is divisible by 97 or not 
*/
#include<stdio.h>

int main()
{
    int num;
    printf("enter the number \n");
    scanf("%d",&num);
    printf("divisibility test returns: %d\n",num%97);
    return 0;
}