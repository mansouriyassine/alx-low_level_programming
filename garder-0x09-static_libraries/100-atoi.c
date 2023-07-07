#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int index, negativeCount, result, stringLength, foundNumber, currentDigit;

index = 0;
negativeCount = 0;
result = 0;
stringLength = 0;
foundNumber = 0;
currentDigit = 0;

while (s[stringLength] != '\0')
stringLength++;

while (index < stringLength && foundNumber == 0)
{
if (s[index] == '-')
++negativeCount;

if (s[index] >= '0' && s[index] <= '9')
{
currentDigit = s[index] - '0';
if (negativeCount % 2)
currentDigit = -currentDigit;
result = result * 10 + currentDigit;
foundNumber = 1;
if (s[index + 1] < '0' || s[index + 1] > '9')
break;
foundNumber = 0;
}
index++;
}

if (foundNumber == 0)
return (0);

return (result);
}
