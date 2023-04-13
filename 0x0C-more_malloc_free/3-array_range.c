#include "main.h"
/*
 * array_range - func
 * @min : Int
 * @max : Int
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *arr;
	
	if(min > max)
		return NULL;
	
	arr = malloc((max-min+1)*sizeof(int));
	if(!arr)
		return NULL;
	
	while(min <= max){
		arr[max-min] = max;
		--max;
	}
	
	return arr;
}
