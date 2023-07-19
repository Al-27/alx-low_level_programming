#include "main.h" 
 
/** 
* - desc  
* @arg: arg  
*  
* Return: type  
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	ulInt num,  clear = ~1;
	
	if(index > sizeof(*n)*8-1 )
		return -1;
	
	num = *n >> index; 
	num = (num & clear) << index;
	
	
	*n = num ;
	return 1;
}
