/*
    write a recursive function to calculate the sum of first n natural numbers
*/
#include<stdio.h>

int main()
{
    int n;
    int reverser=0;
    int digit;
    printf("Enter the  number is \n");
    scanf("%d",&n);

    while(n!=0){

        digit=n%10;
        reverser=(reverser*10)+ digit;
        n=n/10;


    }
    printf("the reverser no  is %d", reverser);
    
    return 0;
}