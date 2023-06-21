#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
void print_fibonacci(int n)
{
unsigned long long int a = 1, b = 2;
int count = 2;

printf("%llu, %llu", a, b);

while (count < n)
{
unsigned long long int next = a + b;
printf(", %llu", next);

a = b;
b = next;
count++;
}

printf("\n");
}

int main()
{
print_fibonacci(98);
return (0);
}
