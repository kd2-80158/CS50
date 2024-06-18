#include<stdio.h>
#include<stdlib.h>

struct car{
    int number;
    char* plate;
};

int main(void)
{
    //dynamic variable declaration
    struct car *mycar = malloc(sizeof(struct car));

    mycar->number = 2012;
    mycar->plate = "New CS50";

    printf("Year manufactured: %i\n",mycar->number);
    printf("Plate name: %s\n",mycar->plate);
}