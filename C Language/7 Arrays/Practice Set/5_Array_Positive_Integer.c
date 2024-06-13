/*
    write a program containing functions which count
    the number of positive integer in an array
*/
#include<stdio.h>
void array_positive(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            printf("the positive number is %d\n",arr[i]);
        }
    }
}

int main()
{
    int a;
    printf("enter the array is \n");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        printf("enter the number is %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    array_positive(arr,a);
    return 0;
}