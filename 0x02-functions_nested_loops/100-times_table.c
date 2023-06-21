#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */

void print_times_table(int n)
{
	int A, B, C;

	if (n >= 0 && n <= 15)
	{
		for (A = 0; A <= n; A++)
		{
			for (B = 0; B <= n; B++)
			{
				C = B * A;

				if (B == 0)
				{
					_putchar(C + '0');
				}
				else if (C < 10 && B != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(C + '0');
				}
				else if (C >= 10 && C < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((C / 10) + '0');
					_putchar((C % 10) + '0');
				}
				else if (C >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((C / 100) + '0');
					_putchar(((C / 10) % 10) + '0');
					_putchar((C % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
