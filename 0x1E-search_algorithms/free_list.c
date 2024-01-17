#include "search_algos.h"

void free_list(listint_t *list)
{
    listint_t *temp;

    while (list)
    {
        temp = list->next;
        free(list);
        list = temp;
    }
}
