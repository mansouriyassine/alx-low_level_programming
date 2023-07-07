#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful, 1 if there is an error
 */
int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc < 2)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
int j;

for (j = 0; argv[i][j]; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}

sum += atoi(argv[i]);
}

printf("%d\n", sum);

return (0);
}
