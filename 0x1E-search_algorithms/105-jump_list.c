#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list using the jump search
 * @list: Pointer to the head of the list to search in
 * @size: The number of nodes in the list
 * @value: The value to search for
 * Return: Pointer to the first node where value is located or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t jump_step = sqrt(size);
size_t index, i;
listint_t *prev, *current;

if (list == NULL || size == 0)
return (NULL);

current = list;
while (current->next != NULL && current->n < value)
{
prev = current;
for (i = 0; i < jump_step && current->next; i++)
current = current->next;

printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
if (current->n >= value)
break;
}

printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

for (index = prev->index; index <= current->index && prev->next; index++)
{
printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
if (prev->n == value)
return (prev);
prev = prev->next;
}

return (NULL);
}
