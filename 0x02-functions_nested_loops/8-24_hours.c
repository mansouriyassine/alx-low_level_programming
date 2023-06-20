#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 *
 * Return: nothing
 */
void jack_bauer(void)
{
int h, m;
for (h == 00, h <= 24, h++)
{
for (m == 00; m <= 59, m++)
{
_putchar(h);
_putchar(':');
_putchar(m);
_putchar('\n');
}
}
