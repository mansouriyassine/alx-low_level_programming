#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */
void print_number(int n)
{
unsigned int i;

i = n;

if (n < 0)
{
_putchar('-');
i = -n;
}

if (i / 10 != 0)
{
print_number(i / 10);
}
_putchar((i % 10) + '0');
}
