#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to be encoded
 *
 * Return: A pointer to the resulting string.
 */
char *leet(char *str)
{
int i, j;
char letters[] = "AEOTL";
char leet[] = "43071";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j] || str[i] == letters[j] + 32)
{
str[i] = leet[j];
break;
}
}
}

return (str);
}
