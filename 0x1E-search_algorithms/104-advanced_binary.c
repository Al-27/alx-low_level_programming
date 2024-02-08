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
    if(array && beg <= end)
    { 
        printf("Searching in array: ");
        print_array(array, beg, end+1);
        cur = ( beg + end ) / 2;
        val = array[cur];
        
        if(val == value)
            return cur;
        else if( value > val)
        {
            final = advanced_binary(array+cur+1,size-cur-1,value) ;
            return final >= 0 ? final + cur + 1 : -1;
            
        }
        else
        {
            return advanced_binary(array,size-(cur-1),value);
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
