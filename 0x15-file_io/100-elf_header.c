#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>

#define ELF_MAGIC 0x7f454c46

int main(int argc, char *argv[]) {
  int fd;
  unsigned char magic[4];

  if (argc != 2) {
    fprintf(stderr, "Usage: elf_header elf_filename\n");
    exit(1);
  }

  fd = open(argv[1], O_RDONLY);
  if (fd == -1) {
    perror("open");
    exit(1);
  }

  if (read(fd, magic, sizeof(magic)) != sizeof(magic)) {
    perror("read");
    exit(1);
  }

  printf("ELF Header:\n");
  printf("  Magic:   %02x %02x %02x %02x\n", magic[0], magic[1], magic[2], magic[3]);
  printf("  Class:                             %d\n", magic[4]);
  printf("  Data:                             %d\n", magic[5]);
  printf("  Version:                           %d\n", magic[6]);
  printf("  OS/ABI:                           %d\n", magic[7]);
  printf("  ABI Version:                       %d\n", magic[8]);
  printf("  Type:                             %d\n", magic[9]);
  printf("  Entry point address:               %#x\n", *(unsigned int *)(magic + 10));

  close(fd);
  return 0;
}
