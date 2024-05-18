#include <stdio.h>

int number = 5;
int main(void)
{
    int guess;
    printf("What's your guess?");
    scanf("%d",&guess);
    if(guess!=number)
    {
        printf("Wrong Guess!");
    }
    else
        printf("You are correct");

    return 0;
}