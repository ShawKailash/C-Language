/*
    write a program to read a text file character by character
    and write its content twice in a separate file
*/
#include<stdio.h>

int main()
{
    FILE *ptr1;
    FILE *ptr2;
    ptr1=fopen("3_Read_File_Character.txt","r");
    ptr2=fopen("3_Write_File_Character.txt","w");
    char c=fgetc(ptr1);
    while(c!=EOF)
    {
        fputc(c,ptr2);
        c=fgetc(ptr1);
    }
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}
