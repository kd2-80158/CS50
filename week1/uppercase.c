#include<stdio.h>
#include<string.h> //library for string functions like strlen(), strcpy()
#include<ctype.h> //library for string functions like toupper()

int main(void)
{
    
    char s[] = "Saurabh";
    printf("Before: %s\n",s);
    printf("After: ");

    for(int i=0,n=strlen(s);i<n;i++)
    {
        // //if lowercase
        // if(s[i]>='a' && s[i]<='z')
        // {
        //     // printf("%c",s[i]-32);
        //     printf("%c",s[i]-('a'-'A'));
        // }
        // else
        // {
        //     printf("%c",s[i]);
        // }
        //using toupper() function of ctype.h library
        printf("%c",toupper(s[i]));
    }
    printf("\n");
  return 0;
}