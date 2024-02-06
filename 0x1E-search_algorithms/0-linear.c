#include "search_algos.h"

/**
 * linear_search - func
 * @array: int*
 * @size: size_t
 * @value: int
 * 
 * Return: int
*/
int linear_search(int *array, size_t size, int value)
{
    int i = 0, val = 0;
    
    if(array)
    {
        for(; i < (int)size; i++)
        {
            val = array[i];
            printf("Value checked array[%d] = [%d]\n",i,val);
            
            if(val == value)
                return i;
        }
    }
    
    return -1;
}
