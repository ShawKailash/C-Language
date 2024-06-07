#include<stdio.h>

int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    if(age>=18 && age<=70)
    {
        printf("you are drive\n");
    }
    else
    {
        printf("you are not drive\n");
    }
    return 0;
}