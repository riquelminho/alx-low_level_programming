#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

#define BUFFER_SIZE 128

/**
 * print_error - Prints an error message to stderr and exits with code 98.
 * @msg: The error message to print.
 */
void print_error(char *msg)
{
    dprintf(STDERR_FILENO, "%s\n", msg);
    exit(98);
}

/**
 * print_elf_header - Prints the information contained in an ELF header.
 * @header: A pointer to the ELF header to print.
 */
void print_elf_header(Elf64_Ehdr *header)
{
    int i;

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x ", header->e_ident[i]);
    printf("\n");
    printf("  Class:                             ");
    switch (header->e_ident[EI_CLASS])
    {
        case ELFCLASSNONE:
            printf("none\n");
            break;
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown: %02x>\n", header->e_ident[EI_CLASS]);
    }
    printf("  Data:                              ");
    switch (header->e_ident[EI_DATA])
    {
        case ELFDATANONE:
            printf("none\n");
            break;
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("<unknown: %02x>\n", header->e_ident[EI_DATA]);
    }
    printf("  Version:                           %d\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            ");
    switch (header->e_ident[EI_OSABI])
    {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("HP-UX\n");
            break;
        case ELFOSABI_NETBSD:
            printf("NetBSD\n");
            break;
        case ELFOSABI_LINUX:
            printf("Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("Solaris\n");
            break;
        case ELFOSABI_AIX:
            printf("AIX\n");
            break;
        case ELFOSABI_IRIX:
            printf("IRIX\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("FreeBSD\n");
            break;
        case ELFOSABI_TRU64:
            printf("TRU64 UNIX\n");
            break;
        case ELFOSABI_MODESTO:
            printf("Novell Modesto\n");
            break;
        case ELFOSABI_OPENBSD:
            printf("OpenBSD\n");
            break;
        default:
            printf("<unknown: %02x>\n", header->e_ident[EI_OSABI]);
    }
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              ");
    switch (header->e_type)
    {
        case ET_NONE:
            printf("NONE (No file type)\n");
            break;
        case
