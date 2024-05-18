#include<stdio.h>

void draw(int n);
int main(void)
{
 int height;
 printf("Height: ");
 scanf("%d",&height);

 draw(height);
}

void draw(int n)
{
    //base case
    if(n<=0)
      return;

    //call function
    draw(n-1);

    //for loop
    for(int i=0;i<n;i++)
    {
        printf("#");
    }
    printf("\n");
}