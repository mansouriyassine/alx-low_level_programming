#include <stdio.h>
#include "main.h"

/**
 * print_program_name - prints the name of the program
 * @program_name: name of the program
 */
void print_program_name(char *program_name)
{
printf("%s\n", program_name);
}

/**
 * main - entry point of the program
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
print_program_name(argv[0]);

return (0);
}
