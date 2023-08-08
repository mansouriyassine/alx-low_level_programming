#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include "main.h"

char *allocate_buffer(char *file);
void close_file_descriptor(int fd);

/**
 * allocate_buffer - Allocates a buffer of 1024 bytes.
 * @file: The name of the file for which the buffer is being allocated.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *allocate_buffer(char *file)
{
char *buffer;

buffer = malloc(sizeof(char) * 1024);

if (buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Cannot allocate memory for %s\n", file);
exit(99);
}

return (buffer);
}

/**
 * close_file_descriptor - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_file_descriptor(int fd)
{
int result;

result = close(fd);

if (result == -1)
{
dprintf(STDERR_FILENO, "Error: Cannot close file descriptor %d\n", fd);
exit(100);
}
}

/**
 * main - Copies the contents of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the command-line arguments.
 *
 * Return: 0 on success.
 *
 * Description: Exits with a specific status code for different scenarios.
 * Exit code 97 for incorrect argument count.
 * Exit code 98 for unreadable source file.
 * Exit code 99 for unwritable destination file.
 * Exit code 100 for failed file descriptor closing.
 */
int main(int argc, char *argv[])
{
int source_fd, dest_fd, bytes_read, bytes_written;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buffer = allocate_buffer(argv[2]);
source_fd = open(argv[1], O_RDONLY);
bytes_read = read(source_fd, buffer, 1024);
dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (source_fd == -1 || bytes_read == -1)
{
dprintf(STDERR_FILENO,
"Error: Cannot read from source file %s\n", argv[1]);
free(buffer);
exit(98);
}

bytes_written = write(dest_fd, buffer, bytes_read);
if (dest_fd == -1 || bytes_written == -1)
{
dprintf(STDERR_FILENO,
"Error: Cannot write to destination file %s\n", argv[2]);
free(buffer);
exit(99);
}

bytes_read = read(source_fd, buffer, 1024);
dest_fd = open(argv[2], O_WRONLY | O_APPEND);

} while (bytes_read > 0);

free(buffer);
close_file_descriptor(source_fd);
close_file_descriptor(dest_fd);

return (0);
}
