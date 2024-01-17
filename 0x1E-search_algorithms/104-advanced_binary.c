#include "search_algos.h"

/**
 * print_subarray - subarray of an integer array.
 *
 * @array: The integer array.
 * @left: The left index of the subarray.
 * @right: The right index of the subarray.
 */
void print_subarray(int *array, size_t left, size_t right)
{
size_t i;

printf("Searching in array: ");
for (i = left; i <= right; i++)
{
printf("%d", array[i]);
if (i < right)
printf(", ");
else
printf("\n");
}
}

/**
 * advanced_binary_recursive - Recursively searchs for a value in array.
 *
 * @array: The sorted integer array.
 * @left: The left index of the current subarray.
 * @right: The right index of the current subarray.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
size_t mid;

if (left > right)
return (-1);

mid = left + (right - left) / 2;

print_subarray(array, left, right);

if (array[mid] == value)
{
if (mid == left || array[mid - 1] != value)
return ((int)mid);
else
return (advanced_binary_recursive(array, left, mid, value));
}
else if (array[mid] > value)
return (advanced_binary_recursive(array, left, mid - 1, value));
else
return (advanced_binary_recursive(array, mid + 1, right, value));
}

/**
 * advanced_binary - Searches for a value array using advanced binary search.
 *
 * @array: The sorted integer array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
if (array == NULL || size == 0)
return (-1);

return (advanced_binary_recursive(array, 0, size - 1, value));
}
