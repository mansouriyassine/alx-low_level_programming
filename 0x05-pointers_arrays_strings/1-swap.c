#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @j: integer to swap
 * @k: integer to swap
 * Return: nothing
 */
void swap_int(int *j, int *k)
{
int i;

i = *j;
*j = *k;
*k = i;
}
