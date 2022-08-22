#include "main.h"
#include <elf.h>

unsigned int _strlen(char *s);
int _close(int fd);
void error_exit(int fd);
void check_usage(int argc, char **argv);
int check_elf(Elf64_Ehdr elf_header);
int read_elf_header(int fd, Elf64_Ehdr *elf_header_ptr);
void print_elf_header(Elf64_Ehdr elf_header);
void print_magic(Elf64_Ehdr elf_header);
void print_class(Elf64_Ehdr elf_header);
void print_data(Elf64_Ehdr elf_header);
void print_version(Elf64_Ehdr elf_header);
void print_osabi(Elf64_Ehdr elf_header);
void print_abiversion(Elf64_Ehdr elf_header);
void print_type(Elf64_Ehdr elf_header);
void print_entry(Elf64_Ehdr elf_header);

/**
 * main - displays the information contained in the ELF header
 * at the start of an ELF file in a given format
 * @argc: number of commandline arguments
 * @argv: array of commandline arguments
 *
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr elf_header;

	/* check usage */
	check_usage(argc, argv);

	/* open file */
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		error_exit(fd);

	/* read file header into elf_header*/
	if (!read_elf_header(fd, &elf_header))
		error_exit(fd);

	/* check file type */
	if (!check_elf(elf_header))
		error_exit(fd);

	/* print ELF header */
	print_elf_header(elf_header);

	_close(fd);
	return (0);
}

/**
 * _strlen - finds the length of a given string
 * @s: string
 *
 * Return: length of given string
 */
unsigned int _strlen(char *s)
{
	unsigned int length = 0;

	if (s == NULL)
		return (0);

	while (*s)
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * _close - close a file given by an file descriptor
 * @fd: file descriptor
 *
 * Return: 1 if successful
 */
int _close(int fd)
{
	if (fd < 0)
		return (1);

	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(98);
	}

	return (1);
}

/**
* error_exit - prints error message to STDERR and exits with code 98
* @fd: file descriptor
*/
void error_exit(int fd)
{
	_close(fd);
	dprintf(STDERR_FILENO, "Error: cannot read the ELF file\n");
	exit(98);
}

/**
 * check_usage - checks for correct usage of the program
 * @argc: number of commandline arguments
 * @argv: array of commandline arguments
 */
void check_usage(int argc, char **argv)
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
}

/**
 * check_elf - checks whether a given file is an ELF file
 * @elf_header: file descriptor
 *
 * Return: 1 if the file is an ELF file. Otherwise 0
 */
int check_elf(Elf64_Ehdr elf_header)
{
	int i;
	unsigned char *buf = elf_header.e_ident;
	unsigned char elf_buf[] = {0x7f, 0x45, 0x4c, 0x46};

	/* compare the 2 arrays */
	for (i = 0; i < 4; i++)
	{
		if (elf_buf[i] != buf[i])
			return (0);
	}

	return (1);
}

/**
 * read_elf_header - reads the header of an elf file
 * @fd: file dscriptor
 * @elf_header_ptr: buffer to store the read header file
 *
 * Return: 1 if successful. 0 otherwise
 */
int read_elf_header(int fd, Elf64_Ehdr *elf_header_ptr)
{
	unsigned int size = sizeof(Elf64_Ehdr);

	/* go to the beginning of the file */
	if (lseek(fd, 0, SEEK_SET) != 0)
		return (0);

	/* read file header into elf_header_ptr */
	if (read(fd, elf_header_ptr, size) != size)
		return (0);

	return (1);
}

/**
 * print_elf_header - prints a given ELF file header
 * @elf_header: ELF file header
 */
void print_elf_header(Elf64_Ehdr elf_header)
{
	printf("ELF Header:\n");

	print_magic(elf_header);
	print_class(elf_header);
	print_data(elf_header);
	print_version(elf_header);
	print_osabi(elf_header);
	print_abiversion(elf_header);
	print_type(elf_header);
	print_entry(elf_header);
}

/**
 * print_magic - prints the Magic field of a given ELF file header
 * @elf_header: ELF file header
 */
void print_magic(Elf64_Ehdr elf_header)
{
	int i;

	printf("  Magic:  ");

	for (i = 0; i < 16; i++)
		printf(" %02x", elf_header.e_ident[i]);

	printf("\n");
}

/**
 * print_class - prints the Class subfield of a given ELF file header
 * @elf_header: ELF file header
 */
void print_class(Elf64_Ehdr elf_header)
{
	char *name = "Class";
	unsigned int i, n, value = elf_header.e_ident[EI_CLASS];

	printf("  %s:", name);
	for (i = 0, n = 35 - _strlen(name); i <= n; i++)
		printf(" ");

	switch (value)
	{
		case ELFCLASSNONE:
			printf("Invalid\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
}

/**
 * print_data - prints the Data subfield of a given ELF file header
 * @elf_header: ELF file header
 */
void print_data(Elf64_Ehdr elf_header)
{
	char *name = "Data";
	unsigned int i, n, value = elf_header.e_ident[EI_DATA];

	printf("  %s:", name);
	for (i = 0, n = 35 - _strlen(name); i <= n; i++)
		printf(" ");

	switch (value)
	{
		case ELFDATANONE:
			printf("Invalid data encoding\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endia\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
}

/**
 * print_version - prints the Version subfield of a given ELF file header
 * @elf_header: ELF file header
 */
void print_version(Elf64_Ehdr elf_header)
{
	char *name = "Version";
	unsigned int i, n, value = elf_header.e_ident[EI_VERSION];

	printf("  %s:", name);
	for (i = 0, n = 35 - _strlen(name); i <= n; i++)
		printf(" ");

	switch (value)
	{
		case EV_NONE:
			printf("0 (invalid)\n");
			break;
		case EV_CURRENT:
			printf("1 (current)\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
}

/**
 * print_osabi - prints the OS/ABI subfield of a given ELF file header
 * @elf_header: ELF file header
 */
void print_osabi(Elf64_Ehdr elf_header)
{
	char *name = "OS/ABI";
	unsigned int i, n, value = elf_header.e_ident[EI_OSABI];

	printf("  %s:", name);
	for (i = 0, n = 35 - _strlen(name); i <= n; i++)
		printf(" ");

	switch (value)
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		default:
			printf("<unknown: %u>\n", value);
			break;
	}
}

/**
 * print_abiversion - prints the ABI Version subfield
 * of a given ELF file header
 * @elf_header: ELF file header
 */
void print_abiversion(Elf64_Ehdr elf_header)
{
	char *name = "ABI Version";
	unsigned int i, n, value = elf_header.e_ident[EI_ABIVERSION];

	printf("  %s:", name);
	for (i = 0, n = 35 - _strlen(name); i <= n; i++)
		printf(" ");

	printf("%u\n", value);
}

/**
 * print_type - prints the Type field of a given ELF file header
 * @elf_header: ELF file header
 */
void print_type(Elf64_Ehdr elf_header)
{
	char *name = "Type";
	unsigned int i, n, value = elf_header.e_type;

	printf("  %s:", name);
	for (i = 0, n = 35 - _strlen(name); i <= n; i++)
		printf(" ");

	switch (value)
	{
		case ET_NONE:
			printf("NONE (No file type)n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
}

/**
 * print_entry - prints the Entry point address field
 * of a given ELF file header
 * @elf_header: ELF file header
 */
void print_entry(Elf64_Ehdr elf_header)
{
	char *name = "Entry point address";
	unsigned int i, n, value = elf_header.e_entry;

	printf("  %s:", name);
	for (i = 0, n = 35 - _strlen(name); i <= n; i++)
		printf(" ");

	printf("0x%x\n", value);
}
