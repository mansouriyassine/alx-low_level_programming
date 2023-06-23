#include <stdio.h>

/**
  * main - Prints the sum of Even Fibonacci numbers
  * less than 4000000.
  *
  * Return: Nothing!
  */
int main(void)
{
int i = 0;
long a = 1, b = 2, sum = b;

while (b + a < 4000000)
{
b += a;

if (b % 2 == 0)
sum += b;

a = b - a;

++i;
}

printf("%ld\n", sum);
return (0);
}
