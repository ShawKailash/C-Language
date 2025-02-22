/*
    write a structure capable of storing date
    write a function to compare those date
*/
#include<stdio.h>
typedef struct date
{
    int date;
    int month;
    int year;
}date;
void display(date d)
{
    printf("the date is %d/%d/%d\n",d.date,d.month,d.year);
}
int datecmp(date d1,date d2)
{
    if(d1.year>d2.year)
    {
        return 1;
    }
    if(d1.year<d2.year)
    {
        return -1;
    }
    if(d1.month>d2.month)
    {
        return 1;
    }
    if(d1.month<d2.month)
    {
        return -1;
    }
    if(d1.date>d2.date)
    {
        return 1;
    }
    if(d1.date<d2.date)
    {
        return  -1;
    }
    return 0;
}
int main()
{
    date d1={6,11,2021};
    date d2={4,11,2021};
    display(d1);
    display(d2);
    int a=datecmp(d1,d2);
    printf("date comparison function return %d",a);
    return 0;
}
