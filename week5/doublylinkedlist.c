#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

typedef struct dllist
{
    int value;
    struct dllist *next;
    struct dllist *previous;
} dllnode;

void forward_display(dllnode *head);
void backward_display(dllnode *tail);
dllnode* insert(dllnode *head, int value);
dllnode* delete(dllnode *head, int value);
bool find(dllnode* head, int value);

int main(void)
{
    dllnode *head = NULL;
    dllnode *tail = NULL;

    //Insert values into the list
    head = insert(head,10);
    head = insert(head,20);
    head = insert(head,30);

    printf("After inserting 10, 20, 30(forward): \n");
    forward_display(head);

    //set the tail pointer to the last node
    tail=head;
    while(tail && tail->next)
      tail=tail->next;
    
    printf("After inserting 10, 20, 30(backward): \n");
    backward_display(head);

    //Find the value in the list
    int search_val = 20;
    if(find(head,search_val))
    {
        printf("Value %d found in the list.\n", search_val);
    }
    else
       printf("Value %d not found in the list.\n", search_val);

    //delete a value from the list
    head = delete(head,20);
    printf("After deleting 20 (forward):\n");
    forward_display(head);

    //Reset the tail pointer after deletion
    tail=head;
    while(tail && tail->next)
    {
        tail = tail->next;
    }

    printf("After deleting 20 (backward): \n");
    backward_display(tail);

    //Free the list
    while(head)
    {
        head = delete(head, head->value);
    }

    return 0;
}