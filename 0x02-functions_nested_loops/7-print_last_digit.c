#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: the number
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
int a = n % 10;
if (a < 0)
a = -a;
_putchar(a + '0');
return (a);
}
