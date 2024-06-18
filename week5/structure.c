#include<stdio.h>

struct car{
    int year;
    char* plate;
};

int main(void)
{
    //static variable declaration
    struct car mycar;
    mycar.year = 2012;

    mycar.plate = "CS50";

    printf("Year manufactured: %i\n ",mycar.year);
    printf("Plate name: %s\n",mycar.plate);
}