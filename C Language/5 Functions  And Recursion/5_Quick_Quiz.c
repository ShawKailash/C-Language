/*
    use the library functions to calculate the area
    of a square with side a
*/
#include<stdio.h>
#include<math.h>

int main()
{
    int side;
    printf("enter the value of side\n");
    scanf("%d",&side);
    printf("the value of area is %f\n",pow(side,2));
    return 0;
}
