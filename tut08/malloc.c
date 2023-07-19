// Malloc Revision
// Written by Catherine Cheng z5310517

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main (void) {
    // how do we malloc an int?
    int *ptr = malloc(sizeof(int));
    

    // how do we malloc an array?
    int *array = malloc(sizeof(int)*15);

    // how do we malloc a struct?
    struct node *str_ptr = malloc(sizeof(struct node));
    // (*str_ptr).data = 3; 
    str_ptr->data = 3;
    str_ptr->next = NULL;

    // turn this into a create_node function?

}

struct node *create_node(int value) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = value;
    new_node->next = NULL;
    return new_node
}
