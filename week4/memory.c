#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *x = malloc(3*sizeof(int));

    x[1] = 22;
    x[2] = 34;
    x[3] = 43;
    free(x);
}