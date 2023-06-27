#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char password[15] = "Tada! Congrats";
int i, ascii_code;

srand(time(NULL));

for (i = 0; i < 15; i++)
{
ascii_code = rand() % 94 + 33;

if (ascii_code == 96)
ascii_code++;

password[i] = (char)ascii_code;
}

printf("%s\n", password);

return (0);
}
