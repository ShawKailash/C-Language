#include<stdio.h>
void display();

int main()
{
    printf("first line display\n");
    display();
    printf("third line display\n");
    return 0;
}
void display()
{
    printf("second line display\n");
}