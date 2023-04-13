#include "main.h"
/*
 * malloc_checked - func
 * @b : uInt
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	if(b > 0)
	{
		return malloc(b);
	}
	else
	{
		exit(98);
	}
}
