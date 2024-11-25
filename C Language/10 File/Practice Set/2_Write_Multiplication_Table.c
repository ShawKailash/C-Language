/*
    write a program to generate multiplication table of a given number in
    text format make sure that the file is readable and well formatted
*/
#include<stdio.h>

int main()
{
    FILE *ptr;
    int num;
    printf("enter the number of table of ");
    scanf("%d",&num);
    ptr =fopen("2_Write_Multiplication_Table.txt","w");
    for(int i=0;i<10;i++)
    {
        fprintf(ptr,"%d x %d = %d\n",num,i+1,num*(i+1));
    }
    fclose(ptr);
    printf("successfully generated table of %d to 2_Write_Multiplication_Table.txt\n",num);
    return 0;
}
