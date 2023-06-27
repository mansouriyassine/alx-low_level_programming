#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;

if (s[i] == '-')
{
sign = -1;
i++;
}

while (s[i] != '\0')
{
if (s[i] >= '0' && s[i] <= '9')
{
int digit = s[i] - '0';

if (result < INT_MIN / 10
|| (result == INT_MIN / 10 && digit > -(INT_MIN % 10)))
{
return (INT_MIN);
}

result = result * 10 - digit;
}
else
{
break;
}
i++;
}
return (result *sign);
}
