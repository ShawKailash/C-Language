/*
    create a string using " " and print its content a loop
*/
#include<stdio.h>

int main()
{
    char str[]="kailash";
    char *ptr=str;
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}
