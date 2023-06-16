#include <stdio.h>

/**
 * main - prints all possible combinations two two-digit numbers
 *
 * Return: Always 0 (Success)
 *
 */
#include <stdio.h>

int main(void)
{
int i, j;

for (i = 0; i <= 99; i++)
{
for (j = i; j <= 99; j++)
{
int num1 = i / 10;
int num2 = i % 10;
int num3 = j / 10;
int num4 = j % 10;

putchar(num1 + '0');
putchar(num2 + '0');
putchar(' ');
putchar(num3 + '0');
putchar(num4 + '0');

if (i != 99 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
