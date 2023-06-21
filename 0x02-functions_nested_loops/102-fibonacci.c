#include <stdio.h>

/**
 * main - Prints fibonacci 15
 *
 * Return: Always 0
 */
#include <stdio.h>

void printFibonacci(int n)
{
int first = 1, second = 2, next, i;

printf("%d, %d, ", first, second);

for (i = 3; i <= n; i++)
{
next = first + second;
printf("%d", next);
        
if (i != n)
{
printf(", ");
}

first = second;
second = next;
}

printf("\n");
}

int main()
{
int n = 50;
printFibonacci(n);
return (0);
}
