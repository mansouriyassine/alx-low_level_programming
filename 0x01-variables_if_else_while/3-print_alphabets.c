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
char BETA = 'A';

while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
putchar('\n');

while (BETA <= 'Z')
{
putchar(BETA);
BETA++;
}
putchar('\n');

return (0);
}
