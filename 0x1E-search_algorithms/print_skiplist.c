#include "search_algos.h"

void print_skiplist(const skiplist_t *list)
{
    const skiplist_t *node = list;

    printf("List :\n");
    while (node)
    {
        printf("Index[%lu] = [%d]\n", node->index, node->n);
        node = node->next;
    }

    printf("\nExpress lane :\n");
    node = list;
    while (node)
    {
        if (node->express)
            printf("Index[%lu] = [%d]\n", node->express->index, node->express->n);
        node = node->express;
    }
}
