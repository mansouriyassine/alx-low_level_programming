#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string
 * @accept: Pointer to the accept string
 *
 * Return: (unsigned int) Number of bytes in the initial segment of s consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found = 1;
int i;

while (*s && found)
{
found = 0;
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
count++;
found = 1;
break;
}
}
s++;
}

return (count);
}
