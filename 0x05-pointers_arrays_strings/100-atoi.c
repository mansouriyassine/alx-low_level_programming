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

while (s[i] == ' ')
i++;

if (s[i] == '-' || s[i] == '+')
{
sign = (s[i] == '-') ? -1 : 1;
i++;
}

while (s[i] >= '0' && s[i] <= '9')
{
if (result > INT_MAX / 10 || (result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
{
return (sign == -1 ? INT_MIN : INT_MAX);
}

result = result * 10 + (s[i] - '0');
i++;
}

return (result * sign);
}
