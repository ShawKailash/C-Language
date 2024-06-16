#include<stdio.h>
#include<string.h>

int main()
{
    char *st="this";
    char st2[40];
    strcpy(st2,st);
    printf("copy for st to st2 me %s",st2);
    return 0;
}