/*
    write a program to modify a file containing an integer to double its value
*/
#include<stdio.h>

int main()
{
    FILE *ptr1;
    FILE *ptr2;
    char input[100];
    char c;
    ptr1=fopen("5_Read.txt","r");
    ptr2=fopen("5_Write.txt","w");
    c=fgetc(ptr1);
    while(c!=EOF)
    {
        printf("%c",c);
        c=fgetc(ptr1);
    }
    printf("\nenter the number aa character ");
    scanf("%s",&input);
    fprintf(ptr2,"%s",input);
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}
