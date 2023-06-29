#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int a[] = {98, 198, 298, 398, 498};
int *p = &a[2];

_printf("a[2] = %d\n", *p);

return (0);
}
