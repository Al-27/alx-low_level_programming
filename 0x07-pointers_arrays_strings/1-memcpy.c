#include "main.h"

/*
 * _memcpy: func 
 * @dest: char
 * @src: char
 * @n: uint
 * 
 * Return: char*
 */
 
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while(n--)
	{
		dest[n] = src[n];
	}
	return dest;
}
 
