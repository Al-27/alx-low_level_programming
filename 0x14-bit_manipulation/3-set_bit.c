#include "main.h" 
 
/** 
* set_bit- desc  
* @n: pointer
* @index: index of *n 
*  
* Return: success 1, fail -1  
*/
int set_bit(ulInt *n, unsigned int index)
{
	ulInt num;
	
	if(index > sizeof(*n)*8 )
		return -1;
		
	num = *n >> index ; 
	num = (num | 1) << index;
	
	
	*n = num ;
	return 1;
}
