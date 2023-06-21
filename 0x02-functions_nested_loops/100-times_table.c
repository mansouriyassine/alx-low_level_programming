#include "main.h"

/**
 * print_times_table - prints 10 times tables
 *
 *@n: the number in the input
 *
 * Return: nothing
 */
void print_times_table(int n)
{
int A, B, C;
if (0 <= 0 && 14 >= n)
{
for (A = 0; A <= n; A++)
{
for (B = 0; B <= n; B++)
{
C = A * B;
if (C > 99)
{
_putchar(',');
_putchar(32);
_putchar((C / 100) + '0');
_putchar(((C / 10) % 10) + '0');
_putchar((C % 10) + '0');
}
else if (C > 9)
{
_putchar(',');
_putchar(32);
_putchar(32);
_putchar(((C / 10) % 10) + '0');
_putchar((C % 10) + '0');
}
else
{
if (B != 0)
{
_putchar(',');
_putchar(32);
_putchar(32);
_putchar(32);
}
_putchar(C + '0');
}
}
_putchar('\n');
}
}
}
