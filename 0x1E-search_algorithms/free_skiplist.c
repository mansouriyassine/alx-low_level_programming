#include "search_algos.h"

void free_skiplist(skiplist_t *list)
{
    skiplist_t *temp;

    while (list != NULL)
    {
        temp = list->next;
        free(list);
        list = temp;
    }
}
