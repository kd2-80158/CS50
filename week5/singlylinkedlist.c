#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct sllist {
    int value;
    struct sllist* next;
} sllnode;

void display(sllnode *sllist);
sllnode* insert(sllnode *head, int value);
sllnode* delete(sllnode *head, int value);
bool find(sllnode* head, int val);

int main(void) {
    sllnode *head = NULL;

    // Insert values into the list
    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 30);
    printf("After inserting 10, 20, 30:\n");
    display(head);

    // Find a value in the list
    int search_val = 20;
    if (find(head, search_val)) {
        printf("Value %d found in the list.\n", search_val);
    } else {
        printf("Value %d not found in the list.\n", search_val);
    }

    // Delete a value from the list
    head = delete(head, 20);
    printf("After deleting 20:\n");
    display(head);

    // Free the list
    delete(head, 10);
    delete(head, 30);

    return 0;
}

void display(sllnode *sllist) {
    sllnode* trav = sllist;
    while (trav != NULL) {
        printf("%d -> ", trav->value);
        trav = trav->next;
    }
    printf("NULL\n");
}

sllnode* insert(sllnode *head, int value) {
    sllnode* new_node = malloc(sizeof(sllnode));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return head;
    }
    new_node->value = value;
    new_node->next = head;
    return new_node;
}

sllnode* delete(sllnode *head, int value) {
    if (head == NULL) {
        return NULL;
    }

    sllnode* temp = head;
    sllnode* prev = NULL;

    // If the head node itself holds the value to be deleted
    if (temp != NULL && temp->value == value) {
        head = temp->next; // Change head
        free(temp); // Free old head
        return head;
    }

    // Search for the value to be deleted, keep track of the previous node
    while (temp != NULL && temp->value != value) {
        prev = temp;
        temp = temp->next;
    }

    // If the value was not present in the list
    if (temp == NULL) return head;

    // Unlink the node from the linked list
    prev->next = temp->next;
    free(temp); // Free memory

    return head;
}

bool find(sllnode *head, int val) {
    sllnode *current = head;
    while (current != NULL) {
        if (current->value == val) {
            return true;
        }
        current = current->next;
    }
    return false;
}
