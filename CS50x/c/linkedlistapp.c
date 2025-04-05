#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(int argc, char *argv[])
{
    node *list = NULL;

    // For each command-line argument
    for (int i = 1; i < argc; i++)
    {
        // atoi converts a string to an integer
        int number = atoi(argv[i]);

        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            // Free memory thus far
            return 1;
        }
        n->number = number;
        n->next = NULL;
        
        // If list is empty
        if (list == NULL)
        {
            // This node is the whole list
            list = n;
        }

        // If list already has numbers
        else
        {
            // Iterate over nodes in list
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                // If we're at the end of the list
                if (ptr->next == NULL)
                {
                    // Add the node to the end of the list
                    ptr->next = n;
                    break;
                }
            }
        }

        printf("%i\n", n->number);
    }
}