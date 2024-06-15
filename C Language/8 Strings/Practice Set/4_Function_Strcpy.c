/*
    write your ownversion of strcpy function from <string.h>
*/
#include<stdio.h>
#include<string.h>
char *strcpy1(char *st2,char *st)
{
    char *cpy=st2;
    while(*st!='\0')
    {
        *st2=*st;
        st2++;
        st++;
    }
    return cpy;
}
int main()
{
    char *st="kailash";
    char st2[40];
    strcpy1(st2,st);
    printf("the copy of st2 is %s",st2);
    return 0;
}