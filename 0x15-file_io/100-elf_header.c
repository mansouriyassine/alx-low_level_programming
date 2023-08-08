#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>

void error_exit(const char *message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

void display_info(Elf64_Ehdr *header) {
    int i;
    printf("Magic: ");
    for (i = 0; i < SELFMAG; ++i) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");

    printf("Class: %s\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
    printf("Data: %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little-endian" : "Unknown");
    printf("Version: %d\n", header->e_ident[EI_VERSION]);
    printf("OS/ABI: %s\n", (header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX System V ABI" : "Unknown");
    printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
    printf("Type: %s\n", (header->e_type == ET_EXEC) ? "EXEC (Executable)" :
                     (header->e_type == ET_DYN) ? "DYN (Shared object)" :
                     (header->e_type == ET_REL) ? "REL (Relocatable)" : "Unknown");
    printf("Entry point address: 0x%lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[]) {
    const char *filename;
    int fd;
    Elf64_Ehdr elf_header;

    if (argc != 2) {
        error_exit("Usage: elf_header elf_filename");
    }

    filename = argv[1];
    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        error_exit("Failed to open file");
    }

    if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header)) {
        close(fd);
        error_exit("Failed to read ELF header");
    }

    if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0) {
        close(fd);
        error_exit("Not an ELF file");
    }

    display_info(&elf_header);

    close(fd);
    return 0;
}
