#include "main.h"

/**
 * _strlen - the length of a string
 * @s: input string
 * Return: length
 */

int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}

return (length);
}
