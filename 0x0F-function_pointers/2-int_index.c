#include "function_pointers.h"
/**
 * int_index - desc
 * @array: param
 * @size: param
 * @cmp: param
 *
 * Return: type
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int iter;
	if(cmp == NULL)
		return (-1);
	if(array)
	{
		if(size > 0)
		{
			for(iter = 0;iter < size;iter++)
			{
				if(cmp(array[iter]) >= 1)
					return (iter);
			}
		}
	}
	return (-1);
}
