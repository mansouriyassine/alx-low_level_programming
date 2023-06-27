#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char password[PASSWORD_LENGTH + 1];
int i;

srand(time(NULL));

for (i = 0; i < PASSWORD_LENGTH; i++)
{
password[i] = '!' + (rand() % 94);
}

password[PASSWORD_LENGTH] = '\0';

printf("%s", password);

return (0);
}
