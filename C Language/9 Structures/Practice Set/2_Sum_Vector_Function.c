/*
    write a function sum vector which returns the sum of two
    vector passedto it the vector mustbe two dimensional
*/
#include<stdio.h>
struct vector
{
    int x;
    int y;
};
struct vector sumvector(struct vector v1,struct vector v2)
{
    struct vector result;
    result.x=v1.x+v2.x;
    result.y=v1.y+v2.y;
    return result;
};
int main()
{
    struct vector v1,v2,sum;
    v1.x=4;
    v1.y=5;
    printf("x dimensional is %d and y dimensional is %d\n",v1.x,v1.y);
    v2.x=6;
    v2.y=8;
    printf("x dimensional is %d and y dimensional is %d\n",v2.x,v2.y);
    sum=sumvector(v1,v2);
    printf("x dimensional of result is %d and y dimensional of result is %d\n",sum.x,sum.y);
    return 0;
}
