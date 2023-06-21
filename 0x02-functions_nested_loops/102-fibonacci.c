#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
int count;
unsigned long a = 0, b = 1, S;

for (count = 0; count < 50; count++)
{
S = a + b;
printf("%lu", S);

a = b;
b = S;

if (count == 49)
printf("\n");
else
printf(", ");
}

return (0);
}
