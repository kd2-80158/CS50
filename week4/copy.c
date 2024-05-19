#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(void)
{
char *s = "hi";
char *t = malloc(strlen(s)+1);

// for(int i=0;i<=strlen(s);i++)
// {
//     t[i] = s[i];
// }

//to copy use this instead

strcpy(t,s);

//uppercase --use lib <ctype.h>
t[0] = toupper(t[0]);

printf("%s\n",s);
printf("%s\n",t);

//free memory
free(t);
}