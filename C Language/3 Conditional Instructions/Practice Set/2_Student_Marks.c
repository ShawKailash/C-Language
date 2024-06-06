/*
    write a programto find out wheather a student is pass or fail,
    if it requires total 40% and at least 33% in each subject to pass
    assume 3 subjects and take marks as aninput from the user
*/
#include<stdio.h>

int main()
{
    int physics,maths,chemistry;
    float total;
    printf("enter physics marks\n");
    scanf("%d",&physics);
    printf("enter maths marks\n");
    scanf("%d",&maths);
    printf("enter chemistry marks\n");
    scanf("%d",&chemistry);
    total=(physics+maths+chemistry)/3;
    if((total<40)||physics<33||maths<33||chemistry<33)
    {
        printf("your total percentage is %f and you are fail\n",total);
    }
    else
    {
        printf("your total percetage is %f and you are pass\n",total);
    }
    return 0;
}