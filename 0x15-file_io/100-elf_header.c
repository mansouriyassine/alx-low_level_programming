#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define ELF_MAGIC "\x7f\x45\x4c\x46"

/**
 * open_and_check - Opens a file and checks if it's an ELF file.
 * @filename: The name of the file to open and check.
 * Return: The file descriptor if successful, exits with an error code if not.
 */
int open_and_check(const char *filename);

/**
 * print_elf_header - Prints the ELF header information.
 * @magic: The magic number identifying the ELF file.
 * Return: None.
 */
void print_elf_header(unsigned char *magic);

int main(int argc, char *argv[])
{
int fd;
unsigned char magic[4];

if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
exit(1);
}

fd = open_and_check(argv[1]);
read(fd, magic, sizeof(magic));
close(fd);

print_elf_header(magic);

return (0);
}

int open_and_check(const char *filename)
{
unsigned char magic[4];

int fd = open(filename, O_RDONLY);
if (fd == -1)
{
perror("open");
exit(1);
}

if (read(fd, magic, sizeof(magic)) != sizeof(magic))
{
perror("read");
exit(1);
}

if (memcmp(magic, ELF_MAGIC, sizeof(magic)) != 0)
{
fprintf(stderr, "Not an ELF file\n");
exit(1);
}

return (fd);
}

void print_elf_header(unsigned char *magic)
{
printf("ELF Header:\n");
printf("  Magic:   %02x %02x %02x %02x\n",
magic[0], magic[1], magic[2], magic[3]);
printf("  Class:                             %d\n", (magic[4] >> 4) & 0xf);
printf("  Data:                              %d\n", (magic[4] >> 3) & 0x1);
printf("  Version:                           %d\n", magic[4] & 0xf);
printf("  OS/ABI:                            %d\n", magic[5] >> 4);
printf("  ABI Version:                       %d\n", magic[5] & 0xf);
printf("  Type:                              %d\n", (magic[6] >> 4) & 0xf);
printf("  Entry point address:               %x\n",
((unsigned int)magic[7] << 24) |
((unsigned int)magic[8] << 16) |
((unsigned int)magic[9] << 8) |
((unsigned int)magic[10]));
}
