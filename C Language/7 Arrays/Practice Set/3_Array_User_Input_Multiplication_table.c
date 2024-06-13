/*
    repeat problem 3 for a general input provided by the user using scanf
*/
#include<stdio.h>

int main()
{
    int mul[10];
    int n;
    printf("enter the number is \n");
    scanf("%d",&n);
    printf("multiplication  of table\n");
    for(int i=0;i<10;i++)
    {
        mul[i]=n*(i+1);
    }
    for(int i=0;i<10;i++)
    {
        printf("%d x %d = %d\n",n,i+1,mul[i]);
    }
    return 0;
}