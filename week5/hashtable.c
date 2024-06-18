#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

typedef char* string;

typedef struct node{
  string phrase;
  struct node* next;
}
node;

node *table[26];

int hash(string phrase);

int main(void)
{
  for(int i=0;i<3;i++)
  {
    char* phrase[20];
    printf("Enter the phrase:\n");
    scanf("%s",phrase);

    //find phrase bucket
    int bucket = hash(phrase);
    printf("%s hashes to %i\n",phrase,bucket);
  }
}
int hash(string phrase)
{
    return toupper(phrase[0])-'A';
}