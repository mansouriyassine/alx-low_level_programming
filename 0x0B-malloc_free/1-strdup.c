#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new string
 * which is a duplicate of the string str
 *
 * @str: The string to be duplicated
 *
 * Return: A pointer to the duplicated string, or NULL
 * if str is NULL or if insufficient memory was available
 */
char *_strdup(char *str)
{
char *dup;
unsigned int i, len = 0;

if (str == NULL)
return (NULL);

while (str[len] != '\0')
len++;

dup = malloc((len + 1) * sizeof(char));
if (dup == NULL)
return (NULL);

for (i = 0; i <= len; i++)
dup[i] = str[i];

return (dup);
}
