#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Input string
 * Return: Converted integer
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;

if (s[0] == '-')
{
sign = -1;
i++;
}
else if (s[0] == '+')
{
i++;
}

while (s[i] != '\0')
{
if (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
}
else
{
break;
}
i++;
}

return (result * sign);
}
