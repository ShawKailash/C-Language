#include<stdio.h>

int main()
{
    FILE *fptr;
    int number=34;
    fptr=fopen("3_Write.txt","w");
    fprintf(fptr,"the number is %d\n",number);
    fprintf(fptr,"thanks for using fprintf");
    fclose(fptr);
    return 0;
}