/*
    write a program using a function which calculate the sum and average of
    two numbers use pointer and print the value of sum and averagein maun()
*/
#include<stdio.h>
void sumandavg(int a,int b,int *sum,float *avg)
{
    *sum=a+b;
    *avg=(float)(*sum)/2;
}

int main()
{
    int i,j,sum;
    float avg;
    i=5;
    j=10;
    sumandavg(i,j,&sum,&avg);
    printf("the value of sum is %d\n",sum);
    printf("the value of avg is %f\n",avg);
    return 0;
}
