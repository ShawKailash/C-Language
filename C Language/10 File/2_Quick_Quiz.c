/*
    modify the program  above to check whetherthe
    file exists or not before opening the file
*/
#include<stdio.h>

int main()
{
    FILE *ptr;
    int num;
    int num2;
    ptr=fopen("Kailash1.txt","r");
    if(ptr==NULL)
    {
        printf("the file does not exit\n");
    }
    else
    {
        fscanf(ptr,"%d",&num);
        fscanf(ptr,"%d",&num2);
        fclose(ptr);
        printf("read the c file is %d\n",num);
        printf("read the c file is %d\n",num2);
    }
    return 0;
}
