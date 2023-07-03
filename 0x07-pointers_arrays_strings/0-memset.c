#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area
 * @b: The constant byte to be filled
 * @n: Number of bytes to be filled
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;
unsigned int i;

for (i = 0; i < n; i++)
{
*ptr = b;
ptr++;
}

return (s);
}

