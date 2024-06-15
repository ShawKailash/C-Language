/*
    write a program to check whether a given
    character is present in a string or not
*/
#include<stdio.h>
void occurence(char *st,char c)
{
    char *ptr=st;
    while(*ptr!='\0')
    {
        if(*ptr==c)
        {
            printf("present");
            break;
        }
        else
        {
            printf("not found");
            break;
        }
        ptr++;
    }
}
int main()
{
    char st[]="kailash";
    occurence(st,'q');
    return 0;
}