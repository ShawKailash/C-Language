#include<stdio.h>

int main()
{
    int i=5;
    printf("the value of after i++ is %d\n",i++);
    printf("the value of i is %d\n",i);
    i++;                 //-->pehle print fir increment
    ++i;                 //-->pehle increment fir print kare
    printf("the value of i is %d\n",i);
    i+=10;               //-->increment i by 10
    printf("the value of i is %d\n",i);
    return 0;
}