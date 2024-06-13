/*
    repeat problem 7 for a custom input given by the user
*/
#include<stdio.h>
void printtable(int *multable,int num,int n)
{
    for(int i=0;i<n;i++)
    {
        multable[i]=num*(i+1);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d x %d = %d\n",num,(i+1),multable[i]);
    }
}

int main()
{
    int m,n,num,multable[m][n];
    printf("enter the number of m is ");
    scanf("%d",&m);
    printf("enter the number of n is ");
    scanf("%d",&n);
    for(int i=0;i<m;i++)
    {
        printf("enter the table number of num is ");
        scanf("%d",&num);
        printtable(multable[m],num,n);
    }
    return 0;
}