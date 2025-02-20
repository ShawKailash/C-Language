/*
    write a program to determine whether a character
    entered by the user is lowercase or not
*/
#include<stdio.h>

int main()
{
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    if(ch>=97&&ch<=122)     //97-122=a-z  -->ascii values
    {
        printf("it is lowercase");
    }
    else
    {
        printf("it is not lowercase");
    }
    return 0;
}
