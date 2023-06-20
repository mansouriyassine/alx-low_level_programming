#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return : nothing
 */
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar (letter);
letter++;
}

_putchar('\n');
}
