#include<stdio.h>

typedef char* string;

//pointer arithmetic
int main(void)
{
    string s = "Sam";

    printf("%c",*s);
    printf("%c",*(s+1));
    printf("%c\n",*(s+2));
}