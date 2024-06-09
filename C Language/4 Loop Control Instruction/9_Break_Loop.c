#include<stdio.h>

int main()
{
    int i;
    printf("enter the number is\n");
    scanf("%d",&i);
    do
    {
        printf("the value of i is %d\n",i);
        if(i==4)
        {
            break;
        }
        i++;
    }
    while(i<10);
    return 0;
}