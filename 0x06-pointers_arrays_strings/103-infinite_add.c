#include <stdio.h>
#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result (r) if successful, otherwise 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, sum, carry = 0;
int i, j, k;

while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;

i = len1 - 1;
j = len2 - 1;
k = size_r - 1;

while (i >= 0 || j >= 0 || carry)
{
sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';

carry = sum / 10;

if (k > 0)
{
r[k] = (sum % 10) + '0';
k--;
}
else
return (0);

i--;
j--;
}

if (k > 0)
{
r[k] = '\0';
return (&r[k]);
}

return (0);
}
