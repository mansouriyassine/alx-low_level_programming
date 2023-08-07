#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * display_error - Displays an error message to
 * stderr and exits with status 98.
 * @message: The error message to display.
 */
void display_error(const char *message)
{
fprintf(stderr, "%s\n", message);
exit(98);
}

/**
 * read_header - Reads the ELF header from the file descriptor.
 * @fd: The file descriptor of the ELF file.
 * @header: A pointer to the ELF header struct to fill.
 */
void read_header(int fd, Elf64_Ehdr *header)
{
ssize_t bytes_read = read(fd, header, sizeof(Elf64_Ehdr));

if (bytes_read != sizeof(Elf64_Ehdr))
display_error("Error: Unable to read ELF header");
}

/**
 * print_elf_header - Prints the information contained
 * in the ELF header.
 * @header: The ELF header struct to print.
 */
void print_elf_header(Elf64_Ehdr header)
{
int i;
printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", header.e_ident[i]);
printf("\n");
printf("  Class:  %s\n", (header.e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
printf("  Data:   %s\n", (header.e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
printf("  Version:  %d (current)\n", header.e_ident[EI_VERSION]);
printf("  OS/ABI:  %s\n", (header.e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "UNKNOWN");
printf("  ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
printf("  Type:  %d (Executable file)\n", header.e_type);
printf("  Entry point address:   0x%lx\n", header.e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, or exit with status code 98 on failure.
 */
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;
if (argc != 2)
{
display_error("Usage: elf_header elf_filename");
}
fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
display_error("Error: Unable to open file");
}
read_header(fd, &header);
print_elf_header(header);
close(fd);
return (0);
}
