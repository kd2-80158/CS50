#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(int argc, char* argv[])
{
    node *list = NULL;
    for(int i=1;i<argc;i++)
    {
        int number = atoi(argv[i]);

        node *n = malloc(sizeof(node));
        if(n==NULL)
        {
            return 1;
        }
        n->number= number;
        n->next = list;
        list=n;
    }

    //printing whole list
    node *trav = list;
    while(trav!=NULL)
    {
        printf("%i ",trav->number);
        trav=trav->next;
    }
}