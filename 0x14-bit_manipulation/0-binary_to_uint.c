#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: The binary number as a string (pointing to 0 and 1 chars).
 *
 * Return: The converted number, or 0 if there is an invalid character
 * in the string or if the input string is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;

if (b == NULL)
return (0);

while (*b)
{
if (*b != '0' && *b != '1')
return (0);

result = result << 1; /* Left shift the current result by 1 bit */
if (*b == '1')
result = result | 1; /* OR with 1 if the current bit is 1 */

b++;
}

return (result);
}
