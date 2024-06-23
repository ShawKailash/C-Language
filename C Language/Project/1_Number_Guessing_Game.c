/*
    this is going to be fun!
    we will write a program that generates a random number and asks
    the player to guess it if the players guess is higher than the
    actual number the program display ""lower number please" similarly
    if the user guess is too low the program print "higher number
    please" when the user guesses the corred number the program display
    the number of guesses the player used to arrive at the number
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100+1;
    printf("solve the (10) time\n");
    do{
        printf("%d attempts\n",nguesses);
        printf("you guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("lower number please!\n");
        }
        else if(guess<number)
        {
            printf("higher number please!\n");
        }
        else
        {
            printf("you guessed it in %d attempts\n",nguesses);
        }
        nguesses++;
        if(guess==number)
        {
            printf("yes i am winer\n");
        }
        else if(nguesses==11)
        {
            printf("losser\n");
            break;
        }
    }
    while(guess!=number);
    return 0;
}