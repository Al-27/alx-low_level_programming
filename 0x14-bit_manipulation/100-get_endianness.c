#include "main.h"

int get_endianness()
{
    
    if( __BYTE_ORDER == __LITTLE_ENDIAN )
        return 1;
    
    return 0;
}