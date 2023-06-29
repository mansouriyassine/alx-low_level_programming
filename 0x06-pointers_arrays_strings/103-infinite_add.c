#include <stdio.h>
#include "main.h"

/**
 * get_length - Calculates the length of a string
 * @s: Input string
 *
 * Return: Length of the string
 */
int get_length(char *s)
{
int length = 0;
while (s[length] != '\0')
length++;
return (length);
}

/**
 * reverse_string - Reverses a string
 * @s: Input string
 * @length: Length of the string
 */
void reverse_string(char *s, int length)
{
int start = 0;
int end = length - 1;
char temp;

while (start < end)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
}

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
int len1 = get_length(n1);
int len2 = get_length(n2);
int sum, carry = 0;
int i, j, k;

if (size_r < len1 || size_r < len2)
return (0);

reverse_string(n1, len1);
reverse_string(n2, len2);

i = 0;
j = 0;
k = 0;

while (i < len1 || j < len2 || carry)
{
sum = carry;
if (i < len1)
sum += n1[i++] - '0';
if (j < len2)
sum += n2[j++] - '0';

carry = sum / 10;

if (k < size_r - 1)
{
r[k++] = (sum % 10) + '0';
}
else
return (0);
}

r[k] = '\0';

reverse_string(r, k);

return (r);
}
