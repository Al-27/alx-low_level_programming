#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>

/**
 * get_data - func 
 * @encoding: arg
 * Return: char
 */
char *get_data (unsigned int encoding)
{
  static char buff[32];

  switch (encoding)
    {
    case ELFDATANONE: return ("none");
    case ELFDATA2LSB: return ("2's complement, little endian");
    case ELFDATA2MSB: return ("2's complement, big endian");
    default:
      snprintf (buff, sizeof (buff), "<unknown: %x>", encoding);
      return buff;
    }
}

/**
 * get_class - func 
 * @elf_class: arg
 * Return: char
 */
char *get_class (unsigned int elf_class)
{
  static char buff[32];

  switch (elf_class)
    {
    case ELFCLASSNONE: return "none";
    case ELFCLASS32:   return "ELF32";
    case ELFCLASS64:   return "ELF64";
    default:
      snprintf (buff, sizeof (buff), "<unknown: %x>", elf_class);
      return buff;
    }
}

/**
 * get_osabi - func 
 * @osabi: arg
 * Return: char
 */
char *get_osabi(unsigned int osabi)
{

  static char buff[32];
  switch (osabi)
    {
        case ELFOSABI_NONE:		return "UNIX - System V";
        case ELFOSABI_HPUX:		return "UNIX - HP-UX";
        case ELFOSABI_NETBSD:	return "UNIX - NetBSD";
        case ELFOSABI_GNU:		return "UNIX - GNU";
        case ELFOSABI_SOLARIS:	return "UNIX - Solaris";
        case ELFOSABI_AIX:		return "UNIX - AIX";
        case ELFOSABI_IRIX:		return "UNIX - IRIX";
        case ELFOSABI_FREEBSD:	return "UNIX - FreeBSD";
        case ELFOSABI_TRU64:	return "UNIX - TRU64";
        case ELFOSABI_MODESTO:	return "Novell - Modesto";
        case ELFOSABI_OPENBSD:	return "UNIX - OpenBSD";
        case ELFOSABI_ARM:	return "ARM";
        case ELFOSABI_STANDALONE:	return ("Standalone App");
         default:
        snprintf (buff, sizeof (buff), "<unknown: %x>", osabi);
        return buff;
    }  
    
}

/**
 * get_type - func 
 * @uType: arg
 * Return: char
 */
char *get_type (unsigned uType)
{
  static char buff[64];

  switch (uType)
    {
    case ET_NONE: return ("NONE (None)");
    case ET_REL:  return ("REL (Relocatable file)");
    case ET_EXEC: return ("EXEC (Executable file)");
    case ET_DYN:
	return ("DYN (Shared object file)");
    case ET_CORE: return ("CORE (Core file)");

    default:
	snprintf (buff, sizeof (buff), ("<unknown>: %x"), uType);
      return buff;
    }
}

/**
 * main - func 
 * @argc: arg
 * @args: arg
 * Return: int
 */
int main(int argc, char* args[])
{
    char *filename;
    unsigned long entry_point;
    int i = 0;
    unsigned char elf_header[25];
    FILE* elf_f = NULL;
    
    if(argc < 2)
    {
        dprintf(STDERR_FILENO,"Missing Arguments\nUsage: elf_header filename");
        return 98;
    }
    
    filename = args[1];
    
    if(!filename)
    {
        dprintf(STDERR_FILENO,"elf_header: filename is NULL.");
        return 98;
    }
    
    if(access(filename, F_OK | R_OK ) != 0)
    {
        dprintf(STDERR_FILENO,"elf_header: file <%s> doesn't exist, it can't be read, or it's not an ELF.",filename);
        return 98;
    }
    
    elf_f = fopen(filename,"rb");
    read(elf_f->_fileno, elf_header, sizeof(elf_header));
    
    lseek(elf_f->_fileno, 24, SEEK_SET);
    read(elf_f->_fileno, &entry_point, 4);

    printf("ELF Header:\n  Magic:   ");
    for( i = 0 ; i<16 ;i++ ) printf( " %.2x",elf_header[i]);
    printf("\n%-36s %s","  Class:",get_class(elf_header[EI_CLASS]));
    printf("\n%-36s %s","  Data:", get_data(elf_header[EI_DATA]));
    printf("\n%-36s %s","  Version:", elf_header[EI_VERSION] ? "1 (current)" : "<unknown>");
    printf("\n%-36s %s","  OS/ABI:",get_osabi( elf_header[EI_OSABI]));
    printf("\n%-36s %x","  ABI Version:", elf_header[EI_ABIVERSION]);
    printf("\n%-36s %s","  Type:", get_type(elf_header[16]));
    printf("\n%-36s 0x%lx\n","  Entry point address:", entry_point);
    
    return 0;    
}
