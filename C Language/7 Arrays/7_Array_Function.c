#include<stdio.h>
void printarray(int *ptr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("the value of element %d is %d\n",i+1,*(ptr+i));
    }
    ptr[2]=9;
}
void printarray1(int *ptr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("the value of element %d is %d\n",i+1,ptr[i]);
    }
    ptr[3]=10;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    printarray(arr,8);
    printf("%d\n",arr[2]);
    printf("\n");
    printarray1(arr,8);
    printf("%d\n",arr[3]);
    return 0;
}