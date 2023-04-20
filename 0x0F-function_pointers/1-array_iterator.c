#include "function_pointers.h"
/**
 * array_iterator - desc
 * @array: param
 * @size: param
 * @action: param
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t tmp;
	
	tmp = 0;
	if(array)
	{
		if(size > 0)
		{
			for(;tmp < size; tmp++)
				action(array[tmp]);
		}	
	}
}
