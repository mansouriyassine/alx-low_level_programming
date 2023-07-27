#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to a pointer to the first node of the list.
 * @str: String to be added to the new node.
 * Return: Address of the new node or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
char *str_copy;

if (str == NULL)
return (NULL);

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

str_copy = strdup(str);
if (str_copy == NULL)
{
free(new_node);
return (NULL);
}

new_node->str = str_copy;
new_node->len = strlen(str);
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
list_t *temp = *head;
while (temp->next != NULL)
temp = temp->next;

temp->next = new_node;
}

return (new_node);
}
