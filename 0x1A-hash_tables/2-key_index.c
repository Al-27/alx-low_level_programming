#include "hash_tables.h"

/**
 * key_index - func
 * @key: arg
 * @size: arg
 *
 * Return: int
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    u_long iKey = 0;
    
    if( size > 0 && key && strcmp((char* )key,""))
    {
        iKey = hash_djb2(key);
        iKey = iKey % size;
    }
    
    return iKey;
}
