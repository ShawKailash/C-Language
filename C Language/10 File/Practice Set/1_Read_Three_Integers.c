/*
    write a program to read three integers from a file
*/
#include<stdio.h>

int main()
{
    int a,b,c;
    FILE *ptr;
    ptr=fopen("1_Read_Three_Integers.txt","r");
    fscanf(ptr,"%d %d %d",&a,&b,&c);
    printf("the value of a b and c is %d %d %d",a,b,c);
    fclose(ptr);
    return 0;
}