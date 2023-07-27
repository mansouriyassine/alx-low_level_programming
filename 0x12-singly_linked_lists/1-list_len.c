#include <stddef.h>
#include "lists.h"

/**
 * list_len - Calculates the number of elements in a linked list.
 * @h: Pointer to the beginning of the list.
 * Return: The number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
