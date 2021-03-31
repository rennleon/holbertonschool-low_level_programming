#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_abi_version(unsigned char *e_ident);
void print_type(Elf64_Half e_type);
void print_entry_point(Elf64_Addr e_entry);

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

	check_elf(elf64->e_ident);
	print_magic(elf64->e_ident);
	print_class(elf64->e_ident);
	print_data(elf64->e_ident);
	print_version(elf64->e_ident);
	print_osabi(elf64->e_ident);
	print_abi_version(elf64->e_ident);
	print_type(elf64->e_type);
	print_entry_point(elf64->e_entry);

	return (0);
}

void check_elf(unsigned char *e_ident)
{
	if (
		e_ident[EI_MAG0] != 0x7f ||
		e_ident[EI_MAG1] != 'E' ||
		e_ident[EI_MAG2] != 'L' ||
		e_ident[EI_MAG3] != 'F'
	)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file - it has the wrong magic bytes at the start\n");
		exit(98);
	}

	printf("ELF Header:\n");
}

void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	
	for (i = 0; i < EI_NIDENT - 1; i++)
		printf("%02x ", e_ident[i]);

	printf("%02x\n", e_ident[EI_NIDENT - 1]);
}

void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32");
	else if (e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64");
	else if (e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("none");
	else
		printf("<unknown: %x>", e_ident[EI_CLASS]);

	printf("\n");
}

void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	if (e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian");
	else if (e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian");
	else if (e_ident[EI_DATA] == ELFDATANONE)
		printf("none");
	else
		printf("<unknown: %x>", e_ident[EI_DATA]);

	printf("\n");
}

void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d", e_ident[EI_VERSION]);

	if (e_ident[EI_VERSION] == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}

void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	if (e_ident[EI_OSABI] == ELFOSABI_NONE)
		printf("UNIX - System V");
	else if (e_ident[EI_OSABI] == ELFOSABI_SYSV)
		printf("UNIX - System V");
	else if (e_ident[EI_OSABI] == ELFOSABI_HPUX)
		printf("HP-UX");
	else if (e_ident[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD");
	else if (e_ident[EI_OSABI] == ELFOSABI_LINUX)
		printf("Linux");
	else if (e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris");
	else if (e_ident[EI_OSABI] == ELFOSABI_IRIX)
		printf("IRIX");
	else if (e_ident[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD");
	else if (e_ident[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64 UNIX");
	else if (e_ident[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM architecture");
	else if (e_ident[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Stand-alone (embedded)");
	else
		printf("<unknown: %d>", e_ident[EI_OSABI]);

	printf("\n");
}

void print_abi_version(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d", e_ident[EI_ABIVERSION]);

	printf("\n");
}

void print_type(Elf64_Half e_type)
{
	printf("  OS/ABI:                            ");

	if (e_type == ET_NONE)
		printf("NONE (None)");
	else if (e_type == ET_REL)
		printf("EXEC (Relocatable file)");
	else if (e_type == ET_EXEC)
		printf("EXEC (Executable file)");
	else if (e_type == ET_DYN)
		printf("DYN (Shared object file)");
	else if (e_type == ET_CORE)
		printf("CORE (Core file)");
	else
		printf("<unknown: %d>", e_type);

	printf("\n");
}

void print_entry_point(Elf64_Addr e_entry)
{
	printf("  Entry point address:               0x%x", (unsigned int)e_entry);
	printf("\n");
}