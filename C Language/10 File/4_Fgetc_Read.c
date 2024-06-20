#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr=fopen("4_Fgetc_Read.txt","r");
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    printf("the value of my character is %c\n",fgetc(ptr));
    fclose(ptr);
    return 0;
}