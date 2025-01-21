/*
    create a two demensional vectorusing structure in c
*/
#include<stdio.h>
struct vector
{
    int x;
    int y;
};
int main()
{
    struct vector v1,v2;
    v1.x=4;
    v1.y=5;
    printf("x dimensional is %d and y dimensional is %d\n",v1.x,v1.y);
    v2.x=9;
    v2.y=6;
    printf("x dimensional is %d and y dimensional is %d\n",v2.x,v2.y);
    return 0;
}
