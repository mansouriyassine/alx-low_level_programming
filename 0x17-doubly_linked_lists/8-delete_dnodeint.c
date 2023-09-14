#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to a pointer to the head of the list
 * @index: Index of the node to delete (starting from 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head, *prev_node = NULL;
unsigned int i = 0;

if (*head == NULL)
return -1;

if (index == 0)
{
*head = current->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}

while (current != NULL)
{
if (i == index)
{
prev_node->next = current->next;
if (current->next != NULL)
current->next->prev = prev_node;
free(current);
return (1);
}

prev_node = current;
current = current->next;
i++;
}

return (-1);
}
