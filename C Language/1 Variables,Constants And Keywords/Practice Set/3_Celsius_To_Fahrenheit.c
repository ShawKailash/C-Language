/*
    write a program to convert celcius to fahrenheit
*/
#include<stdio.h>

int main()
{
    float celsius,fahrenheit;
    printf("enter the value of celsius is \n");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("the convert of celsius to fehrenheit is %f ",fahrenheit);
    return 0;
}