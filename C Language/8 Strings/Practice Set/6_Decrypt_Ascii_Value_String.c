/*
    write a program to decrypt the string encrypted
    using encrypt function in problem 6
*/
#include<stdio.h>
void encrypt(char *c)
{
    char *ptr=c;
    while(*ptr!='\0')
    {
        *ptr=*ptr-1;
        ptr++;
    }
}
int main()
{
    char c[]="lbjmbti";
    encrypt(c);
    printf("encrypted string is %s",c);
    return 0;
}