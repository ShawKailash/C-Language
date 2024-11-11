#include<stdio.h>
#include<string.h>

int main()
{
    char st1[40]="hello";
    char *st2="kailash";
    strcat(st1,st2);
    printf("this is concatenate st1 %s",st1);
    return 0;
}
