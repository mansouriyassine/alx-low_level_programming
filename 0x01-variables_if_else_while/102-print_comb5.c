#include <stdio.h>

/**
 * main - prints all possible combinations two two-digit numbers
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
for (int i = 0; i <= 99; i++)
{
for (int j = 0; j <= 99; j++)
{
if (i != j)
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

return (0);
}
