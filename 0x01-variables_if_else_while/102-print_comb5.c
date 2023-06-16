#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;

for (i = 0; i <= 99; i++)
{
for (j = 0; j <= 99; j++)
{
if ((i / 10 != j / 10) || (i % 10 != j % 10))
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return 0;
}
