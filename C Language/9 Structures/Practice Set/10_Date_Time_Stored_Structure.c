/*
    write a structure capable of storing date and time
    write a function to compare those date and time
*/
#include<stdio.h>
typedef struct datetime
{
    int date;
    int month;
    int year;
    int hour;
    int minutes;
    int second;
}datetime;
void display(datetime dt)
{
    printf("the date and time is %d/%d/%d  %d:%d:%d\n",dt.date,dt.month,dt.year,dt.hour,dt.minutes,dt.second);
}
int datetimecmp(datetime dt1,datetime dt2)
{
    if(dt1.year>dt2.year)
    {
        return 1;
    }
    if(dt1.year<dt2.year)
    {
        return -1;
    }
    if(dt1.month>dt2.month)
    {
        return 1;
    }
    if(dt1.month<dt2.month)
    {
        return -1;
    }
    if(dt1.date>dt2.date)
    {
        return 1;
    }
    if(dt1.date<dt2.date)
    {
        return -1;
    }
    if(dt1.hour<dt2.hour)
    {
        return 1;
    }
    if(dt1.hour<dt2.hour)
    {
        return -1;
    }
    if(dt1.minutes<dt2.minutes)
    {
        return 1;
    }
    if(dt1.minutes<dt2.minutes)
    {
        return -1;
    }
    if(dt1.second<dt2.second)
    {
        return 1;
    }
    if(dt1.second<dt2.second)
    {
        return -1;
    }
    return 0;
}
int main()
{
    datetime dt1={4,11,2021,12,23,45};
    datetime dt2={4,11,2021,12,23,45};
    display(dt1);
    display(dt2);
    int a=datetimecmp(dt1,dt2);
    printf("date and time comparison function return %d",a);
    return 0;
}