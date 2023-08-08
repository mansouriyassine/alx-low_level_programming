#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * open_and_check - Opens a file and performs error checking.
 * @filename: The name of the file to open.
 * @flags: The flags to use when opening the file.
 * @mode: The permissions mode to set for the file (if created).
 * @error_code: The error code to use for exit in case of failure.
 *
 * Return: The file descriptor on success, or exit with error code on failure.
 */
int open_and_check(
const char *filename,
int flags,
mode_t mode,
int error_code
)
{
int fd = open(filename, flags, mode);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't open or create file %s\n", filename);
exit(error_code);
}
return (fd);
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
int source_fd, dest_fd;
ssize_t num_read, num_written;
char buffer[1024];

if (argc != 3)
{
fprintf(stderr, "Usage: cp file_from file_to\n");
exit(97);
}

source_fd = open_and_check(argv[1], O_RDONLY, 0, 98);
dest_fd = open_and_check(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644, 99);

while ((num_read = read(source_fd, buffer, 1024)) > 0)
{
num_written = write(dest_fd, buffer, num_read);
if (num_written < num_read)
{
fprintf(stderr, "Error: Can't write to file %s\n", argv[2]);
close(source_fd);
close(dest_fd);
exit(99);
}
}

if (num_read == -1)
{
fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
close(source_fd);
close(dest_fd);
exit(98);
}

if (close(source_fd) == -1)
fprintf(stderr, "Error: Can't close fd %d\n", source_fd);

if (close(dest_fd) == -1)
fprintf(stderr, "Error: Can't close fd %d\n", dest_fd);

return (0);
}
