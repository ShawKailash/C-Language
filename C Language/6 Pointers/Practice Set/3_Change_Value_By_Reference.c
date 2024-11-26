/*
    whrite a program to change the value of a
    variable to ten time of its current value
    write a function and pass the value by reference
*/
#include<stdio.h>
void valuebyreference(int *a)
{
    printf("the value by reference i is %d",*a*10);
}

int main()
{
    int i=4;
    printf("the value of i is %d\n",i);
    valuebyreference(&i);
    return 0;
}
