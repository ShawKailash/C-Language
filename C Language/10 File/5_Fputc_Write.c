#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr=fopen("5_Fputc_Write.txt","w");
    putc('c',ptr);
    putc('c',ptr);
    putc('c',ptr);
    putc('c',ptr);
    fclose(ptr);
    return 0;
}
