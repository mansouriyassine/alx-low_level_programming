#include "print_alphabet_x10.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * return : nothing
 */
void print_alphabet_x10(void)
{
char i = 'a';
int j = 1;
while (j<=10)
{
while (i <= 'z')
{
putchar(i);
i++;
putchar('\n');
}
i = 'a';
j++;
}
}
