#include "main.h"

/**
 * append_text_to_file - func
 * @filename: arg
 * @text_content: arg
 *
 * Return: int
*/
int append_text_to_file(const char *filename, char *text_content)
{
    FILE *file = NULL; 
    struct stat sfile;
    int len = 0, written = 0;
    if( !filename )
        return -1;
    if(access(filename,F_OK) != F_OK)
        return -1;
        
    file = fopen(filename,"a");
    /*
        get file stats (including file permissions)
    */
    if( stat(filename,&sfile) == -1 )
        return -1;
    
    if( !( (sfile.st_mode & S_IRUSR && sfile.st_mode & S_IWUSR) || (sfile.st_mode & S_IWUSR) ) )
        return -1;
    
    if( !file )
        return -1;
    
    if( !text_content  )
    {
        fclose(file);
        return 1;
    }
    len = strlen(text_content);
    written = write(file->_fileno,text_content,len);
    
    if(written < len)
        return -1;
    
    fclose(file);
    return 1;
}