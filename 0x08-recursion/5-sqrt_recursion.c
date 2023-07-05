#include "main.h"

int sqrt_recursive_helper(int n, int start, int end);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root of n,
 * or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

if (n == 0 || n == 1)
return (n);

return (sqrt_recursive_helper(n, 1, n));
}

/**
 * sqrt_recursive_helper - Helper function to perform the recursive calculation
 * @n: The number to find the square root of
 * @start: The starting point for the search
 * @end: The ending point for the search
 *
 * Return: The natural square root of n,
 * or -1 if n does not have a natural square root
 */
int sqrt_recursive_helper(int n, int start, int end)
{
int mid;

if (start <= end)
{
mid = start + (end - start) / 2;

if (mid > n / mid)
return (sqrt_recursive_helper(n, start, mid - 1));
else if (mid *mid == n)
return (mid);
else if (mid *mid < n)
return (sqrt_recursive_helper(n, mid + 1, end));
}

return (-1);
}
