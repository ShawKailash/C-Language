/*
    create an array of 10 number verify using pointer 
    arithmetic that (ptr+2) points to the third  element
    where ptr is a pointer pointing to the first element
    of the array
*/
#include<stdio.h>

int main()
{
    int arr[10];
    int *ptr=arr;
    ptr=ptr+2;
    if(ptr==&arr[2])
    {
        printf("these point to the same location in memory\n");
    }
    else
    {
        printf("these do not point to the same location in memory\n");
    }
    return 0;
}