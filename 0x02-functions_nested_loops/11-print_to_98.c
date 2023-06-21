#include "main.h"
#include <stdio.h>

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
for (i = n ; i <= 98; i++)
{
printf("%d%c", i, (i == 98) ? '\n' : ',');
}
}
else if (n == 98)
{
printf("%d%c", i, (i == 98) ? '\n' : ',');
}
else
{
for (i = n ; i >= 98; i--)
{
printf("%d , ", i);
}
}
}
