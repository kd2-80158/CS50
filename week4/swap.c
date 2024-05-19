#include<stdio.h>
void swap(int *a, int *b);
int main(void)
{
    int x = 10;
    int y = 20;

    printf("Value of x and y: %d %d\n",x,y);

    //swap these numbers
    swap(&x,&y);

    printf("Values of x and y after swapping: %d %d\n",x,y);
} 
void swap(int *a, int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}