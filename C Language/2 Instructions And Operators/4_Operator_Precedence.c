#include<stdio.h>

int main()
{
    int x=2;
    int y=3;
    printf("the value of 3*x-8*y is %d\n",3*x-8*y);
    printf("the value of 8*y-3*x is %d\n",8*y/3*x);
    // 8*3/3*2=24/6=4 will give wrong answer
    // 8*3/3*2=24/3*2=8*2=16 will give right answer (lift to right)
    return 0;
}
