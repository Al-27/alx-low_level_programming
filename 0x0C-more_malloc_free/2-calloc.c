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
	int sizeT;
	char* mem;
	
	sizeT = nmemb * size;
	if(nmemb == 0 || size == 0)
		return NULL;
	
	mem = malloc(sizeT);
	while(sizeT--)
		mem[sizeT] = 0;
	
	return mem;
} 
