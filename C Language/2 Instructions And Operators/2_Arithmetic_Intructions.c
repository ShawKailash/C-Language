#include<stdio.h>
#include<math.h>

int main()
{
    int a=10;
    int b=6;
    printf("the sum of a+b is %d\n",a+b);
    printf("the sum of a-b is %d\n",a-b);
    printf("the sum of a*b is %d\n",a*b);
    printf("the sum of a/b is %d\n",a/b);
    int z;
    printf("\n");
    z=a*b;
    // a*b=z;    --> Inlegal(not work)
    printf("the value of z is %d",z);
    printf("\n");
    printf("5 when divided by 2 leaves a remainder of %d \n",5%2);
    printf("-5 when divided by 2 leaves a remainder of %d \n",-5%2);
    printf("5 when divided by -2 leaves a remainder of %d \n",5%-2);
    printf("\n");
    // printf("the valueof 4*5 is %d\n",(4)(5));  --> will not return 20 it is wrong
    printf("the valueof 4*5 is %d\n",(4)*(5));
    printf("\n");
    // printf("the value of 2^5 is %f\n",4^5);  --> will not product 2 to the power 5
    printf("the value of 2 to the power 5 is %f\n",pow(2,5));
    printf("\n");
    printf("the value of 6+5 is %d\n",6+5);
    printf("the value of 6+5.6 is %f\n",6+5.6);
    printf("the value of 6.5+5.6 is %f\n",6.5+5.6);
    printf("\n");
    printf("the value of 5/2 is %d\n",5/2);
    printf("the value of 2/5 is %d\n",2/5);
    printf("the value of 5.0/2 is %f\n",5.0/2);
    printf("the value of 2.0/5 is %f\n",2.0/5);
    return 0;
}