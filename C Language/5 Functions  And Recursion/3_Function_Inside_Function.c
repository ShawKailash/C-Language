#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main()
{
    goodmorning();
    return 0;
}
void goodmorning()
{
    printf("good morning kailash\n");
    goodafternoon();
}
void goodafternoon()
{
    printf("good afternoon kailash\n");
    goodnight();
}
void goodnight()
{
    printf("good night kailash\n");
}
