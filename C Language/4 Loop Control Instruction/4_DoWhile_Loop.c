#include<stdio.h>

int main()
{
    int i;
    printf("enter the number is\n");
    scanf("%d",&i);
    do
    {
        printf("%d\n",i);
        i++;
    }while(i<10);
    return 0;
}
