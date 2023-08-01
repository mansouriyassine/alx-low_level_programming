#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 * @head: pointer to a pointer to the head of the list
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *tmp;
unsigned int count = 0;

if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
return (1);
}

current = *head;
while (current != NULL)
{
if (count == index - 1)
{
tmp = current->next;
if (tmp == NULL)
return (-1);

current->next = tmp->next;
free(tmp);
return (1);
}
count++;
current = current->next;
}

return (-1);
}
