/*
    write a function to calculate force of attraction 
    on a body of mass m exerted by earth (g=9.8m/s2)
*/
#include<stdio.h>
float force(float mass);

int main()
{
    float m;
    printf("enter the mass in kgs\n");
    scanf("%f",&m);
    printf("the value of force in netwon is %.2f\n",force(m));
    return 0;
}
float force(float mass)
{
    float result;
    result = mass*9.8;
    return result;
}