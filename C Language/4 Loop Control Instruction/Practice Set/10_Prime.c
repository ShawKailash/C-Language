/*
    write a program to check  whether a given number
    is prime or not using loops
*/

// while loop
// #include<stdio.h>

// int main()
// {
//     int i=2,n,prime=1;
//     printf("enter the number is\n");
//     scanf("%d",&n);
//     while(i<n)
//     {
//         if(n%i==0)
//         {
//             prime=0;
//             break;
//         }
//         i++;
//     }
//     if(prime==0)
//     {
//         printf("it is not prime number");
//     }
//     else
//     {
//         printf("it is prime number");
//     }
//     return 0;
// }

// do while loop
// #include<stdio.h>

// int main()
// {
//     int i=2,n,prime=1;
//     printf("enter the number is\n");
//     scanf("%d",&n);
//     do
//     {
//         if(n%i==0)
//         {
//             prime=0;
//             break;
//         }
//         i++;
//     }
//     while(i<n);
//     if(prime==0)
//     {
//         printf("it is not prime number");
//     }
//     else
//     {
//         printf("it is prime number");
//     }
//     return 0;
// }

// for loop
#include<stdio.h>

int main()
{
    int n,prime=1;
    printf("enter the number is\n");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            prime=0;
            break;
        }
    }
    if(prime==0)
    {
        printf("it is not prime number");
    }
    else
    {
        printf("it is prime number");
    }
    return 0;
}