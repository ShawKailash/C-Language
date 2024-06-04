/*
    calculate the area of a circle and modify the same program to
    calculate the volume of a cylinder given its radius and height
*/
#include<stdio.h>

int main()
{
    int radius,hight;
    float pi=3.14;
    printf("the value of radius \n");
    scanf("%d",&radius);
    printf("the area of this circle is %f\n",pi*radius*radius);
    printf("the value of hight \n");
    scanf("%d",&hight);
    printf("volume of cylinder is %f\n",pi*radius*radius*hight);
    return 0;
}