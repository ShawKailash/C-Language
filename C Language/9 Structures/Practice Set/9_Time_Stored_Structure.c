/*
    write a structure capable of storing time
    write a function to compare those time
*/
#include<stdio.h>
typedef struct time
{
    int hour;
    int minutes;
    int second;
}time;
void display(time t)
{
    printf("the time is %d:%d:%d\n",t.hour,t.minutes,t.second);
}
int timecmp(time t1,time t2)
{
    if(t1.hour>t2.hour)
    {
        return 1;
    }
    if(t1.hour<t2.hour)
    {
        return -1;
    }
    if(t1.minutes>t2.minutes)
    {
        return 1;
    }
    if(t1.minutes<t2.minutes)
    {
        return -1;
    }
    if(t1.second>t2.second)
    {
        return 1;
    }
    if(t1.second<t2.second)
    {
        return  -1;
    }
    return 0;
}
int main()
{
    time t1={12,32,29};
    time t2={12,32,29};
    display(t1);
    display(t2);
    int a=timecmp(t1,t2);
    printf("time comparison function return %d",a);
    return 0;
}
