#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: First index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
size_t jump = sqrt(size);
size_t prev = 0, step = 0;
size_t i = 0;

if (!array || size == 0)
return (-1);

while (step < size && array[step] < value)
{
printf("Value checked array[%lu] = [%d]\n", step, array[step]);
prev = step;
step += jump;
}

if (step >= size)
step = size - 1;

printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

for (i = prev; i <= step && i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return ((int)i);
}

return (-1);
}
