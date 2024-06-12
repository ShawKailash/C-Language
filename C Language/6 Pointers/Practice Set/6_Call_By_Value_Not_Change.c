/*
    try problem 3 using call by value and verify that
    it doesnt change the value of the said variable
*/
#include<stdio.h>
void callbyvalue(int a)
{
    a=29;
}

int main()
{
    int i=5;
    printf("the value of i is %d\n",i);
    callbyvalue(i);
    printf("the value of i is %d\n",i);
    return 0;
}