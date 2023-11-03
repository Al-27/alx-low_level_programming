#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    u_long iKey = 0;
    
    if( size > 0 && key )
    {
        iKey = hash_djb2(key);
        iKey = iKey % size;
    }
    
    return iKey;
}
