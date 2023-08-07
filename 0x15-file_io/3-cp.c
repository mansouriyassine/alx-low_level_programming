#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

#define BUFSIZE 1024

/**
 * open_file - Opens a file and returns the file descriptor.
 * @filename: The name of the file to open.
 * @mode: The mode to open the file in.
 *
 * Return: The file descriptor on success, or -1 on failure.
 */
static int open_file(const char *filename, int mode)
{
int fd;

fd = open(filename, mode);
if (fd == -1)
{
fprintf(stderr, "Error: Can't open file %s\n", filename);
exit(98);
}

return (fd);
}

/**
 * read_write_file - Reads from one file and writes to another file.
 * @fd_from: The file descriptor for the source file.
 * @fd_to: The file descriptor for the destination file.
 *
 * Return: 0 on success, or -1 on failure.
 */
static int read_write_file(int fd_from, int fd_to)
{
char buffer[BUFSIZE];
int bytes_read, bytes_written;

while ((bytes_read = read(fd_from, buffer, BUFSIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
fprintf(stderr, "Error: Can't write to file\n");
return (-1);
}
}

if (bytes_read == -1)
{
fprintf(stderr, "Error: Can't read from file\n");
return (-1);
}

return (0);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, or exit with the appropriate error code on failure.
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;

if (argc != 3)
{
fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}

fd_from = open_file(argv[1], O_RDONLY);
if (fd_from == -1)
{
return (-1);
}

fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC);
if (fd_to == -1)
{
close(fd_from);
return (-1);
}

return (read_write_file(fd_from, fd_to));
}
