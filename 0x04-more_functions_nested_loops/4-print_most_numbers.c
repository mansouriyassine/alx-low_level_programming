#include "main.h"
/**
*print_most_numbers - Prints numbers from 1 to 9 except 2 and 4
*
*Return: Nothing
*/
void print_most_numbers(void)
{
int num;
for (num = 48; num < 58; num++)
{
if ((num == 50) || (num == 52))
{
continue;
}
_putchar(num);
}
_putchar(10);
}
