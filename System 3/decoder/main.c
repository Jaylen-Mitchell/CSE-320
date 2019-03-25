#include <stdlib.h>  
#include <stdio.h>
#include <string.h>

// Forward referneces
void initialize_list(LinkedList *list);
void append_list(LinkedList *list, const char *name);
void free_list(LinkedList *list);

int main()
{
    LinkedList list;
    LinkedListNode *node;
    
    //
    // Initialize the list
    //
    initialize_list(&list);


    //
    // Iterate though the list
    // displaying each name
    //
    for (node = list.head; node != NULL; node = node->next)
    {
        printf("%s\n", node->name);
    }
    
    //
    // Free the memory allocated to the list
    //
    free_list(&list);

    return 0;
}

/**
 * Actual nodes in our linked list
 */
typedef struct LinkedListNode
{
    char *name;

    struct LinkedListNode *next;

} LinkedListNode;

/**
 * A structure that represents our linked list
 */
typedef struct
{
    LinkedListNode *head;
    LinkedListNode *tail;

} LinkedList;

