#include "search_algos.h"

void free_skiplist(skiplist_t *list);

skiplist_t *create_skiplist(int *array, size_t size)
{
    skiplist_t *head = NULL, *node, *prev = NULL;
    size_t i, sqrt_size = sqrt(size);

    for (i = 0; i < size; i++)
    {
        node = malloc(sizeof(skiplist_t));
        if (!node)
        {
            free_skiplist(head);
            return (NULL);
        }

        node->n = array[i];
        node->index = i;
        node->next = NULL;
        node->express = NULL;

        if (i % sqrt_size == 0 && prev)
            prev->express = node;

        if (!head)
            head = node;
        else
            prev->next = node;

        prev = node;
    }
    return head;
}
