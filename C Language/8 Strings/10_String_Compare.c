#include<stdio.h>
#include<string.h>

int main()
{
    char st1[40]="hello";
    char *st2="kailash";
    int val=strcmp(st1,st2);
    printf("the compare val is %d",val);
    return 0;
}