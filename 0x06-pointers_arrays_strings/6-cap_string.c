#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be capitalized
 *
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *str)
{
int i = 0;

if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = toupper(str[i]);
}
i++;

while (str[i] != '\0')
{

if (str[i] >= 'a' && str[i] <= 'z')
{
if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
str[i - 1] == '}')
{
str[i] = toupper(str[i]);
}
}
i++;
}

return (str);
}
