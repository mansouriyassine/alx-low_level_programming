#include "main.h"

/**
 * print_array - Prints n elements of an integer array
 * @a: Pointer to the array
 * @n: Number of elements to print
 * Return: Nothing
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);

if (i != n - 1)
printf(", ");
}

printf("\n");
}
