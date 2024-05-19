#include<stdio.h>

//create your own datatype
typedef char* string;

int main(void)
{
    int n = 50;
    int *p = &n;
    printf("Address: %p\n",p);
    printf("Value: %d\n",*p);

    //string
    string s= "Sam";
    printf("%p\n ",s);
    printf("%p\n ",&s[0]);
    printf("%p\n ",&s[1]);
    printf("%p\n ",&s[2]);
    printf("%p\n ",&s[3]);

}