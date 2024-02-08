#include "search_algos.h"

/**
 * binary_search - func
 * @array: int*
 * @size: size_t
 * @value: int
 * 
 * Return: int
*/
int advanced_binary(int *array, size_t size, int value)
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
