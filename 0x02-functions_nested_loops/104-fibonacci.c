#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
void print_fibonacci(int n)
{
int a = 1, b = 2;
int count = 2;

printf("%d, %d", a, b);

while (count < n)
{
int next = a + b;
printf(", %d", next);

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
