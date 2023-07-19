#include "main.h"
/**
 * get_endianness - func
 *
 * Return: int
 */
int get_endianness(void)
{
    char a = 1;

    return (a == 00000001);
}
