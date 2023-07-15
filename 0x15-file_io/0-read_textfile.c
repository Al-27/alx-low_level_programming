#include "main.h"

/**
 * read_textfile- desc
 * @filename: arg
 * @letters: arg
 * Return: ssize
 * 
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t len = 0, ssread = 0;
    FILE *file;
    char* buffer = NULL;
    
    if(!filename)
        return 0; 
        
    if(access(filename, F_OK) == F_OK)
    {
        file = fopen(filename, "r");
        
        if(!file)
            return 0;
        
        buffer = malloc(letters+1);
        if(!buffer)
            return 0;
        
        len = read(file->_fileno,buffer,letters);
        fclose(file);
        
        ssread = write(STDOUT_FILENO, buffer, len);
        free(buffer);
        
        if(ssread != len)   
            return 0;
        
    }
    else
    {
        return 0;
    }
    
    return len;
}
