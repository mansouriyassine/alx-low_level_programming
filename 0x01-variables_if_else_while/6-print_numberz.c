#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: Always 0.
 */
#include <stdio.h>

int main() 
{
for (int i = 0; i <= 9; i++) {
putchar(i + '0');
}
putchar('\n');

return 0;
}
