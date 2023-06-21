#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long int a = 1;
unsigned long int b = 2;
unsigned long int next, S = 0;

while (a <= 4000000)
{
if (a % 2 == 0)
{
S += a;
}

next = a + b;
a = b;
b = next;
}

printf("%lu\n", S);

return (0);
}
