#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

/**
 * isNotNull - func
 * @f: arg
 * @sf: arg
 * @isDest: arg
*/
void isNotNull(FILE *f, char *sf, int isDest)
{
    if (!f)
    {
        dprintf(STDERR_FILENO, "Error: Can't %s %s\n", !isDest ? "read from" : "write to", sf);
        exit(98 + isDest);
    }
}

/**
 * CloseFiled - func
 * @fd: arg
 *
*/
void CloseFiled(FILE* fd)
{
    if( close(fileno(fd)) != 0 )
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd->_fileno);
        exit(100);
    }
}

/**
 * main - func
 * @argc: arg
 * @args: arg
 *
 * Return: int
*/
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
        readLen = read(fileno(src), buffer,1024);
        if(readLen == -1)
        {
            isNotNull(NULL,srcFilenm,0);
        }
        write(dest->_fileno, buffer, readLen);
        free(buffer);
    }

    CloseFiled(dest);
    CloseFiled(src);
    return 0;
}
