#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef char* string;

int main(void)
{
    string s= (char*)malloc(100*sizeof(char));
    string t=(char*)malloc(100*sizeof(char));

    printf("s: ");
    scanf("%s",s);

    printf("t: ");
    scanf("%s",t);

//instead of == sign, use strcmp present in <string.h> lib to compare two strings
    if(strcmp(s,t)==0)
    {
        printf("Same");
    }
    else
    {
        printf("Different");
    }
}