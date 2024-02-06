#include "search_algos.h"

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
    int beg = 0, cur = 0, end = (int)size, val;
    while (array && beg != end)
    {
        printf("Searching in array: ");
        print_array(array, beg, end);
        cur = ( beg + end ) / 2;
        val = array[cur];
        
        if(val == value)
            return cur;
        else if( value > val)
        {
            beg = cur;
        }
        else
        {
            end = cur;
        }
    }
    
    return -1;
}

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
