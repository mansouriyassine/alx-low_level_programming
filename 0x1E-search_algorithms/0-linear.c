#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: index where value is located, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;
for (i = 0; array && i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return ((int)i);
}
return (-1);
}
