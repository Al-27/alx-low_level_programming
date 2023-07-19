#include "main.h"

/**
 * get_endianness - func
 * 
 * Return: int
 */
int get_endianness()
{
    char a = 1;
    if( 00000001 == a )
        return 1;
    
    return 0;
}
