#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit (0 through 9)
 * @c: The character to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
return (c >= '0' && c <= '9');
}

/**
 * multiply - Multiplies two positive numbers
 * @num1: The first number
 * @num2: The second number
 */
void multiply(char *num1, char *num2)
{
int len1 = 0, len2 = 0, i, j, carry, n1, n2, sum;
int *result;

while (num1[len1] != '\0')
{
if (!_isdigit(num1[len1]))
{
printf("Error\n");
exit(98);
}
len1++;
}

while (num2[len2] != '\0')
{
if (!_isdigit(num2[len2]))
{
printf("Error\n");
exit(98);
}
len2++;
}

result = malloc(sizeof(int) * (len1 + len2));
if (result == NULL)
{
printf("Error\n");
exit(98);
}

for (i = 0; i < len1 + len2; i++)
result[i] = 0;

for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
n1 = num1[i] - '0';

for (j = len2 - 1; j >= 0; j--)
{
n2 = num2[j] - '0';
sum = (n1 * n2) + result[i + j + 1] + carry;
carry = sum / 10;
result[i + j + 1] = sum % 10;
}

if (carry > 0)
result[i + j + 1] += carry;
}

i = 0;
while (result[i] == 0 && i < len1 + len2)
i++;

if (i == len1 + len2)
printf("0\n");
else
{
for (; i < len1 + len2; i++)
printf("%d", result[i]);
printf("\n");
}

free(result);
}

/**
 * main - Entry point
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (98);
}

multiply(argv[1], argv[2]);

return (0);
}
