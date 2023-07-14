#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

void isNotNull(FILE *f, char *sf, int isDest)
{
    if (!f)
    {
        dprintf(STDERR_FILENO, "Error: Can't %s file %s\n", !isDest ? "read from" : "write to", sf);
        exit(98 + isDest);
    }
}

void CloseFiled(FILE* fd)
{
    if( fclose(fd) != 0 )
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd->_fileno);
        exit(100);
    }
}

int main(int argc, char *args[])
{

    char *srcFilenm, *destFilenm, *buffer = NULL;
    int readLen = 0, existNot = 1;
    FILE *src, *dest;

    if (argc < 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
    srcFilenm = args[1], destFilenm = args[2];

    if (access(srcFilenm, F_OK | R_OK) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", srcFilenm);
        exit(98);
    }
    existNot = access(destFilenm, F_OK);
    src = fopen(srcFilenm, "r"), dest = fopen(destFilenm, "w");
    
    if(existNot == -1)
    {
        chmod(destFilenm, 0664);
    }
    isNotNull(src, srcFilenm, 0);
    isNotNull(dest, destFilenm, 1);
    
    while (feof(src) == 0)
    {
        buffer = malloc(1024);
        readLen = fread(buffer,1,1024,src);
        write(dest->_fileno, buffer, readLen);
        free(buffer);
    }

    CloseFiled(src);
    CloseFiled(dest);
    return 0;
}
