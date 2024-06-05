/*
    which of the following is invalid in c?
    (1) int a;b=a;
    (2) int v=3^3;
    (3) char dt='6 august 2000'
*/
#include<stdio.h>

int main()
{
    int a;
    int b=a;
    // int a; b=a;  --> invalid
    int v=3^3;
    char dt='6';
    // char dt='6 august 2000';  -->invalid
    return 0;
}