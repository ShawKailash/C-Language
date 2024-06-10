/*
    write afunction to convert celsius temperature int fahrenheit
*/
#include<stdio.h>
float fahrenheit(int celsuis);

int main()
{
    int c;
    printf("enter the celsius\n");
    scanf("%d",&c);
    printf("celsius convert to fahrenheit is %f",fahrenheit(c));
    return 0;
}
float fahrenheit(int celsuis)
{
    float result;
    result = (float)(celsuis*9/5)+32;
    return result; 
}