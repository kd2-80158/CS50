#include <stdio.h>
#include <stdbool.h>

bool validTriangle(int a,int b,int c);
int a, b, c;
int main(void)
{
    
//   printf("Enter the value of a, b and c: ");
//   scanf("%d%d%d",a,b,c);

  bool result = validTriangle(10,20,25);

  if(result)
    printf("This is a valid tringle.");
  else
    printf("Invalid triangle.");
}

bool validTriangle(int x, int y, int z)
{
  if(a<0 || b<0 || c<0)
    return false;

  if(a+b<=c || b+c<=a || a+c<=b)
    return false;

 
    return true;
}