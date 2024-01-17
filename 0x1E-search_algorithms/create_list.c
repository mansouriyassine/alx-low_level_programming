#include "search_algos.h"


void free_list(listint_t *list);

listint_t *create_list(int *array, size_t size)
{
    listint_t *head = NULL, *new_node, *temp;
    size_t i;

    for (i = 0; i < size; i++)
    {
        new_node = malloc(sizeof(listint_t));
        if (new_node == NULL)
        {
            free_list(head);
            return (NULL);
        }
        new_node->n = array[i];
        new_node->index = i;
        new_node->next = NULL;

        if (head == NULL)
            head = new_node;
        else
        {
            temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = new_node;
        }
    }
    return head;
}
