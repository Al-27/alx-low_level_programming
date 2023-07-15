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
        dprintf(STDERR_FILENO, "Error: Can't %s %s\n", !isDest ? "read from file" : "write to", sf);
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
    int readLen = 0, existNot = 1, lastPos = -1;
    FILE *src, *dest;
    fpos_t srcCur;

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
    
    fgetpos(src,&srcCur);    
    do
    {
        lastPos = srcCur.__pos;
        
        buffer = malloc(1024);
        readLen = read(src->_fileno,buffer,1024);
        
        if(readLen == -1)
        {
            isNotNull(NULL, srcFilenm, 0);
        }
           
        if( write(dest->_fileno, buffer, readLen) != readLen)
        {
            isNotNull(NULL, destFilenm, 1);
        } 
        
        fgetpos(src,&srcCur);
        free(buffer);
    }while (srcCur.__pos != lastPos);

    CloseFiled(dest);
    CloseFiled(src);
    return 0;
}
