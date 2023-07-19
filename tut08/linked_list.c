// Linked List Demo
// Written by Catherine Cheng z5310517

#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node *create_node(int data);

int main (void) {
    // how do we create a linked list
    struct node *head;
    head = create_node(1);
    head->next = create_node(2);
    head->next->next = create_node(3);

    // iterating through a linked list
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d\n", curr->data);
        curr = curr->next;
    }

    // how to find the last element of the linked list
    curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = create_node(4);

    // inserting at head
    struct node *new_head = create_node(0);
    new_head->next = head;
    head = new_head;

    
    // inserting in middle
    struct node *new = create_node(1.5);
    new->next = head->next->next;
    head->next->next = new;
   

    // special cases
    // empty list
    // lists of size 1

    


}

struct node *create_node(int data) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
