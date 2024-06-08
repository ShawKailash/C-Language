/*
    write a program to calculate the factorial
    of a given number using a for loop
*/

// while loop
// #include<stdio.h>

// int main()
// {
//     int i=1,factorial=1;
//     int n;
//     printf("enter the number is \n");
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         factorial*=i;
//         i++;
//     }
//     printf("the value of factorial %d is %d",n,factorial);
//     return 0;
// }

// do  while loop
// #include<stdio.h>

// int main()
// {
//     int i=1,factorial=1;
//     int n;
//     printf("enter the number is \n");
//     scanf("%d",&n);
//    do
//    {
//         factorial*=i;
//         i++;
//    }
//    while(i<=n);
//     printf("the value of factorial %d is %d",n,factorial);
//     return 0;
// }

// for loop
#include<stdio.h>

int main()
{
    int i,factorial=1;
    int n;
    printf("enter the number is \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial*=i;
    }
    printf("the value of factorial %d is %d",n,factorial);
    return 0;
}