/*
    write a program with three function
    1> good morning function which prints "good morning"
    2> good afternoon function which print "good afternoon"
    3> good night function which print "good night"
    main() should call all of these in order 1 -> 2 -> 3
*/
#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main()
{
    goodmorning();
    goodafternoon();
    goodnight();
    return 0;
}
void goodmorning()
{
    printf("good morning kailash\n");
}
void goodafternoon()
{
    printf("good afternoon kailash\n");
}
void goodnight()
{
    printf("good night kailash\n");
}