#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list.
 * @value: The value to search for.
 * Return: Pointer on the first node where value is located.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *node = list, *express;

if (!list)
return (NULL);

while (node->express != NULL && node->express->n < value)
{
printf("Value checked at index [%lu] = [%d]\n",
node->express->index, node->express->n);
node = node->express;
}

if (node->express != NULL)
printf("Value checked at index [%lu] = [%d]\n",
node->express->index, node->express->n);
express = node->express ? node->express : node;
while (express->next != NULL)
express = express->next;

printf("Value found between indexes [%lu] and [%lu]\n",
node->index, express->index);

while (node != NULL && node->index <= express->index)
{
printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
if (node->n == value)
return (node);
node = node->next;
}

return (NULL);
}
