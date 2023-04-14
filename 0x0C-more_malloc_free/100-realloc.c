#include "main.h"
/**
 * _realloc- func
 * @ptr : void
 * @old_size : uInt
 * @new_size : uInt
 *
 * Return: pointer
 */
 void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
 {
 	unsigned int ind;
 	char* newMem, *derf;
 	
 	ind = 0;
 	if(ptr)
	{
 		if(new_size > old_size)
	 	{
	 		newMem = malloc(new_size);
	 		derf = malloc(old_size);
 			derf = (char*)ptr;
	 		while(ind < old_size)
	 		{
	 			newMem[ind] = derf[ind];
	 			ind++;
	 		} 
	 	}
	 	else if(new_size == old_size)
	 	{
	 		return ptr;
	 	}
	 	else if(new_size == 0)
		{
			return NULL;
	 	}
 	}
 	else
	{
		if(new_size > old_size)
	 	{
	 		newMem = malloc(new_size);
	 	}
	 	else
	 	{
	 		return NULL;
	 	}
 	}
 	
 	return newMem;
 }
