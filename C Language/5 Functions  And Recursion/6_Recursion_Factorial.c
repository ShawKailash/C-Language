#include<stdio.h>
int factorial(int x);

int main()
{
    int a;
    printf("enter the factorial number is\n");
    scanf("%d",&a);
    printf("the value of factorial %d is %d",a,factorial(a));
    return 0;
}
int factorial(int x)
{
    printf("calling factorial (%d)\n",x);
    if(x==1 || x==0)
    {
        return 1;
    }
    else
    {
        return x*factorial(x-1);
    }
}
