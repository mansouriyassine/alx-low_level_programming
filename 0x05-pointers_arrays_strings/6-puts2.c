#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: Input string
 * Return: Nothing
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
putchar('\n');
}
