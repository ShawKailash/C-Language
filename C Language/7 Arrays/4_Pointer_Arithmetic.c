#include<stdio.h>

int main()
{
    int i=34;
    int *ptr=&i;
    printf("the value of ptr is %u\n",ptr);
    ptr++;
    printf("the value of ptr is %u\n",ptr);
    ptr++;
    printf("the value of ptr is %u\n",ptr);
    ptr++;
    printf("the value of ptr is %u\n",ptr);
    ptr++;
    printf("the value of ptr is %u\n",ptr);
    char j='a';
    char *a=&j;
    printf("the value of a is %u\n",a);
    a++;
    printf("the value of a is %u\n",a);
    a++;
    printf("the value of a is %u\n",a);
    a++;
    printf("the value of a is %u\n",a);
    float k=4.6;
    float *b=&k;
    printf("the value of b is %u\n",b);
    b++;
    printf("the value of b is %u\n",b);
    b++;
    printf("the value of b is %u\n",b);
    b++;
    printf("the value of b is %u\n",b);
    b++;
    printf("the value of b is %u\n",b);

    return 0;
}