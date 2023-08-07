#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFSIZE 1024

int open_file(const char *filename, int mode);
int read_write_file(int fd_from, int fd_to);

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
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}

fd_from = open_file(argv[1], O_RDONLY);
fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC);

read_write_file(fd_from, fd_to);

if (close(fd_from) == -1 || close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd\n");
exit(100);
}

return (0);
}

/**
 * open_file - Opens a file and returns the file descriptor.
 * @filename: The name of the file to open.
 * @mode: The mode to open the file in.
 *
 * Return: The file descriptor on success, or -1 on failure.
 */
int open_file(const char *filename, int mode)
{
int fd = open(filename, mode, 0644);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
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
int read_write_file(int fd_from, int fd_to)
{
char buffer[BUFSIZE];
ssize_t bytes_read, bytes_written;

while ((bytes_read = read(fd_from, buffer, BUFSIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to file\n");
exit(99);
}
}

if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file\n");
exit(98);
}

return (0);
}
