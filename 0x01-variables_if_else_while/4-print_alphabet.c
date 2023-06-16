#include <stdio.h>

/**
 * main - print the alphabet
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
char alpha = 'a';

while (alpha <= 'z')
{
if (alpha != 'e' && alpha != 'q')
{
putchar(alpha);
}
alpha++;
}

putchar('\n');

return (0);
}
