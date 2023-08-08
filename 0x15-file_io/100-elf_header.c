#include "main.h"

/** display_error  - The function prints error message
 * @message : The error to display
 */
void display_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * main - The main file
 * @argc : The argument count 
 * @argv : The argument count
 * Return: Returns 0 on success
 */
int main(int argc, char *argv[])
{
	int i, fd;
	ssize_t bytes_read;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		display_error("Usage: elf_header elf_filename");
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1) 
	{
		display_error("Failed to open the file.");
	}
	bytes_read = read(fd, &header, sizeof(Elf64_Ehdr));
	if (bytes_read != sizeof(Elf64_Ehdr)) 
	{
		display_error("Failed to read ELF header.");
	}
	close(fd);
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		display_error("Not an ELF file.");
	}
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n",
			header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
			header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
			(header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "Unknown"));
	printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");
	switch (header.e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
		case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break;
		case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
		case ELFOSABI_LINUX: printf("UNIX - Linux\n"); break;
		case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
		case ELFOSABI_IRIX: printf("UNIX - IRIX\n"); break;
		case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n"); break;
		case ELFOSABI_TRU64: printf("UNIX - TRU64\n"); break;
		case ELFOSABI_ARM: printf("ARM\n"); break;
		case ELFOSABI_STANDALONE: printf("Standalone (embedded) application\n"); break;
		default: printf("Unknown\n");
	}
	printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (header.e_type)
	{
		case ET_NONE: printf("NONE (No file type)\n"); break;
		case ET_REL: printf("REL (Relocatable file)\n"); break;
		case ET_EXEC: printf("EXEC (Executable file)\n"); break;
		case ET_DYN: printf("DYN (Shared object file)\n"); break;
		case ET_CORE: printf("CORE (Core file)\n"); break;
		default: printf("Unknown\n");
	}
	printf("  Entry point address:               0x%" PRIx64 "\n", (uint64_t)header.e_entry);
	return 0;
}
