#include "main.h"

/**
 * print_to_98 - prints numbers from n to 98
 *
 * @n: starting number
 *
 * Return : nothing
 */
void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n ; i <= 98 ; i++)
{
_putchar(i + '0');
_putchar(',');
_putchar(' ');
}
}
else if (n == 98)
{
_putchar('9');
_putchar('8');
}
else
{
for (i = n ; i >= 98 ; i--);
{
_putchar(i + '0');
_putchar(',');
_putchar(' ');
}
}
}
