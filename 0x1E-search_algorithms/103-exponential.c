#include "search_algos.h"

/**
 * print_array - func
 * @array: int*
 * @beg: int
 * @end: int
*/
void print_array(int *array, int beg, int end)
{
    int i = beg;
    for(;i < end; i++)
        printf("%d%s", array[i], i+1 == end ? "\n" : ", " );
}
/**
 * binary_search - func
 * @array: int*
 * @size: size_t
 * @value: int
 * 
 * Return: int
*/
int binary_search(int *array, size_t size, int value)
{
    int beg = 0, cur = 0, end = (int)size - 1, val, final = 0;
    while (array && !final)
    {
        if( beg == end )
            if(final == 0 )
                final = 1;
        
        printf("Searching in array: ");
        print_array(array, beg, end+1);
        cur = ( beg + end ) / 2;
        val = array[cur];
        
        if(val == value)
            return cur;
        else if( value > val)
        {
            beg = cur + 1;
        }
        else
        {
            end = cur - 1;
        }
    }
    
    return -1;
}
/**
 * exponential_search - func
 * @array: int*
 * @size: size_t
 * @value: int
 * 
 * Return: int
*/
int exponential_search(int *array, size_t size, int value)
{
    int left = 0, cur = 1, sz = (int)size, i=0;
	if(array)
	{
		while(array[cur] < value && cur < sz)
		{
			printf("Value checked array[%d] = [%d]\n",cur,array[cur] ); 
			left = cur;
			cur *= 2;			
		}
		printf("Value found between indexes [%d] and [%d]\n", left, cur >= sz ? cur-1:cur);
	}
	cur = cur > sz ? sz-left : cur-left;
	i = binary_search(array+left,(size_t)cur,value);
   return i >= 0 ? i + left: i ;
}
