#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int i, j;

for (i = 0; i <= 9; i++)
{
for (j = i; j <= 9; j++)
{
putchar(i + '0');
putchar(j + '0');
putchar(',');
putchar(' ');
}
}

putchar('\n');

return 0;
}
