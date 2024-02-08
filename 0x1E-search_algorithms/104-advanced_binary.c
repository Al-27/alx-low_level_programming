#include "search_algos.h"

/**
 * advanced_binary - func
 * @array: int*
 * @size: size_t
 * @value: int
 * 
 * Return: int
*/
int advanced_binary(int *array, size_t size, int value)
{
    int beg = 0, cur = 0, end = (int)size, val, final = 0;
    if(array && beg <= end)
    { 
        printf("Searching in array: ");
        print_array(array, beg, end);
        cur = ( beg + end ) / 2 ;
        val = array[cur];
        printf("==[%d]==",cur);
        
        if(val == value && has_occurences(array,size,value,&cur) <= 2 )
            return cur;
        else if( value > val)
        {
            final = advanced_binary(array+cur+1,size-cur-1,value) ;
            return final >= 0 ? final + cur +1 : -1;
            
        }
        else
        {
            return advanced_binary(array,size-(cur),value);
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

int has_occurences(int *array, int size, int val,int *m)
{
    int occ = 0;
    if(array && size > 1)
    {
        if(array[0] == val)
        {
            occ += 1;
        }
        if(m && size <= 3)
            if(array[(*m)-1] == array[*m])
                *m = (*m) - 1;
        occ += has_occurences(array+1, size-1, val, NULL);
    }
    
    return occ;
}