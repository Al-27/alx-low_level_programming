#include "search_algos.h"

/**
 * jump_search - func
 * @array: int*
 * @size: size_t
 * @value: int
 * 
 * Return: int
*/
int jump_search(int *array, size_t size, int value)
{
    int left = 0, cur = 0, sz = (int)size, val, i;
    cur = sqrt(sz);
	if(array)
	{
    	i = fmin(cur,sz)-1; 
			printf("Value checked array[%d] = %d\n",0,array[0] );
		while(array[i] < value)
		{
			left = cur;
			cur = cur + sqrt(sz);
			printf("Value checked array[%d] = %d\n",left,array[left] );
			if( left >= sz)
				return -1;
			i = fmin(cur,sz);
		}
		printf("Value found between indexes [%d] and [%d]\n", left,cur);
		while(left<sz)
		{
			val = array[left];
			printf("Value checked array[%d] = %d\n",left,val);
			if(val == value)
				return left;
			left++;
		}
	}
   return -1;
}
