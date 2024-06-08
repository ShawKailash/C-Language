/*
    write a program to sum nth natural
    numbers using while loop
*/

// while loop
// #include<stdio.h>

// int main()
// {
//     int i=1,sum=0,n=10;
//     while(i<=n)
//     {
//         sum+=i;
//         i++;
//     }
//     printf("the value of sum (1 to 10) is %d",sum);
//     return 0;
// }

// do while loop
// #include<stdio.h>

// int main()
// {
//     int i=1,sum=0,n=10;
//     do
//     {
//         sum+=i;
//         i++;
//     }
//     while(i<=n);
//     printf("the value of sum (1 to 10) is %d",sum);
//     return 0;
// }

// for loop
#include<stdio.h>

int main()
{
    int i,sum=0,n;
    printf("enter the number is\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("the value of sum %d is %d",n,sum);
    return 0;
}