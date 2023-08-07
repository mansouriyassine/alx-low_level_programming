#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - program that copies the content of a file to another file
* @argc: num argument
* @argv: string argument
* Return: 0
*/

int main(int argc, char *argv[])
{
int file_from, file_to;
ssize_t num_read, num_written;
char buf[1024];

if (argc != 3)
fprintf(stderr, "Usage: cp file_from file_to\n");
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (file_to == -1)
{
fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
close(file_from);
exit(99);
}
while ((num_read = read(file_from, buf, 1024)) > 0)
{
num_written = write(file_to, buf, num_read);
if (num_written < num_read)
{
fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
close(file_from);
close(file_to);
exit(99);
}
}
if (num_read == -1)
{
fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
close(file_from);
close(file_to);
exit(98);
}

if (close(file_from) == -1)
fprintf(stderr, "Error: Can't close fd %d\n", file_from);

if (close(file_to) == -1)
fprintf(stderr, "Error: Can't close fd %d\n", file_to);

return (0);
}
