#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the sign of a number
 *
 * Return : 1 if n is greater than zero, 0
 * if n is 0 and -1 if n is less than 0
 *
 */
int print_sign(int n)
{
if (n > 0)
{
return (1);
printf("+");
}
else if (n == 0)
{
return (0);
printf("0");
}
else
{
return (-1);
printf("-");
}
}
