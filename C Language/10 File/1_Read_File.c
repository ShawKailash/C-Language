#include<stdio.h>

int main()
{
    FILE *ptr;
    int num;
    int num2;
    ptr=fopen("1_Read.txt","r");
    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num2);
    fclose(ptr);
    printf("read the c file is %d\n",num);
    printf("read the c file is %d\n",num2);
    return 0;
}