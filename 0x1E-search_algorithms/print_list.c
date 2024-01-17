#include "search_algos.h"

void print_list(const listint_t *list)
{
    while (list)
    {
        printf("Index[%lu] = [%d]\n", list->index, list->n);
        list = list->next;
    }
}
