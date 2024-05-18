#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[10];

    printf("What's your password?");
    scanf("%s",str);

    char password[] = "Saurabh";

    if(strcmp(str,password)==0)
    {
        printf("Correct password!!!");
    }
    else
        printf("Try Again.");
        
}