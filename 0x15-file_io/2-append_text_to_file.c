#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, text_size = 0, bytes_written;

if (!filename)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

if (text_content)
{
while (text_content[text_size])
text_size++;

bytes_written = write(fd, text_content, text_size);
close(fd);

if (bytes_written == text_size)
return (1);
}

close(fd);
return (-1);
}
