#include "main.h"

/**
 * times_table - prints the 9 times tables
 *
 * Return: nothing
 */
void times_table(void)
{
int i, j;
for (i = 0; i<= 9; i++)
{
for (j = 0; j<= 9; j++)
{       
int A = i * j;
int A = i * j;
if (A <= 9)
{
if (j != 0)
{
_putchar(' ');
}
_putchar(A + '0');
}
else
{
_putchar((A / 10) + '0');
_putchar((A % 10) + '0');
}
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
