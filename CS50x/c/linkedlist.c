// Implements a sorted list of numbers using a linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(int argc, char *argv[])
{
    // Memory for numbers
    node *list = NULL;

    // For each command-line argument
    for (int i = 1; i < argc; i++)
    {
        // Convert argument to int
        int number = atoi(argv[i]);

        // Allocate node for number
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        n->number = number;
        n->next = NULL;

        // If list is empty
        if (list == NULL)
        {
            list = n;
        }

        // If number belongs at the beginning of the list
        else if (n->number < list->number)
        {
            n->next = list;
            list = n;
        }

        else
        {
            // Iterate over nodes in list
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                // If at end of the list
                if (ptr->next == NULL)
                {
                    // Add the node to the end of the list
                    ptr->next = n;
                    break;
                }

                // If in the middle of the list
                if (n->number < ptr->next->number)
                {
                    n->next = ptr->next;
                    ptr->next = n;
                    break;
                }

            }
        }
    }

    // Print the list
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }

    // Free the list
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        free(ptr);
    }
}