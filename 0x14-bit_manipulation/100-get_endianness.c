#include "main.h"

/**
 * get_endianness - func
 * 
 * Return: int
 */
int get_endianness()
{
    
    if( __BYTE_ORDER == 1234 )
        return 1;
    
    return 0;
}
