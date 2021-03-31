#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

void check_elf(Elf64_Ehdr *elf64);
void print_magic(Elf64_Ehdr *elf64);
void print_class(Elf64_Ehdr *elf64);
void print_data(Elf64_Ehdr *elf64);
void print_version(Elf64_Ehdr *elf64);
void print_osabi(Elf64_Ehdr *elf64);
void print_abi_version(Elf64_Ehdr *elf64);
void print_type(Elf64_Ehdr *elf64);
void print_entry_point(Elf64_Ehdr *elf64);

int main(int ac, char **av) {
	int fd;
	Elf64_Ehdr *elf64;
	int elf_size = sizeof(Elf64_Ehdr);

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: ./elf_header ELF_FILE\n");
		exit(98);
	}

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Could not OPEN file\n");
		exit(98);
	}

	elf64 = malloc(elf_size);
	if (elf64 == NULL)
	{
		dprintf(STDERR_FILENO, "Could not ALLOCATE MEMORY file\n");
		exit(98);
	}

	if (read(fd, elf64, elf_size) == -1)
	{
		free(elf64);
		dprintf(STDERR_FILENO, "Could not READ file\n");
		exit(98);
	}

	check_elf(elf64);
	print_magic(elf64);
	print_class(elf64);
	print_data(elf64);
	print_version(elf64);
	print_osabi(elf64);
	print_abi_version(elf64);
	print_type(elf64);
	print_entry_point(elf64);

	return (0);
}

void check_elf(Elf64_Ehdr *elf64)
{
	if (
		elf64->e_ident[0] != 0x7f ||
		elf64->e_ident[1] != 'E' ||
		elf64->e_ident[2] != 'L' ||
		elf64->e_ident[3] != 'F'
	)
	{
		dprintf(STDERR_FILENO, "File is not a elf\n");
		exit(98);
	}

	printf("ELF Header:\n");
}

void print_magic(Elf64_Ehdr *elf64)
{
	int i;

	printf("  Magic:   ");
	
	for (i = 0; i < EI_NIDENT - 1; i++)
		printf("%02x ", elf64->e_ident[i]);

	printf("%02x\n", elf64->e_ident[EI_NIDENT - 1]);
}

void print_class(Elf64_Ehdr *elf64)
{
	printf("  Class:                             ");
	/*if (elf64->e_ident[EI_CLASS] == ELFCLASS32) */
}