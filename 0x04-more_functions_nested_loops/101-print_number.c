#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */
void print_number(int n)
{
int divisor = 1;
int num = n;

if (n == 0)
{
_putchar('0');
return;
}
else if (n < 0)
{
_putchar('-');
num = -n;
}

while (num / 10 != 0)
{
divisor *= 10;
num /= 10;
}

while (divisor != 0)
{
_putchar('0' + n / divisor);
n %= divisor;
divisor /= 10;
}
}
