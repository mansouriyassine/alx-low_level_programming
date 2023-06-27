#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return: Nothing
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
if (str[i] == '\0')
break;
i++;
}
_putchar('\n');
}
