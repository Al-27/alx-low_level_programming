#include "main.h" 
 
/** 
* clear_bit - desc  
* @n: arg  
* @index: arg  
*  
* Return: type  
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	ulInt num,  clear = ~1;
 
	
	if(index > sizeof(*n)*8-1 )
		return -1;
	/*
	num = *n >> index; 
	num = (num & clear) << index;
	*/
	clear = 0;
	clear = (((clear >> index)) + 1) << index; 
	num = clear ^ *n;
	
	*n = num ;
	return 1;
}
