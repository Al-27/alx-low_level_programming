#include "main.h"
/*
 * _calloc - func
 * @nmemb : uInt
 * @size : uInt
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if(nmemb == 0 || size == 0)
		return NULL;
	
	return malloc(nmemb * size);
} 
