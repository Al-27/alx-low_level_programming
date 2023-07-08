#include "main.h" 
 
/** 
* get_bit - desc  
* @n: arg  
* @index: arg  
*  
* Return: type  
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int ind = 0;
	int res = 0;
	
	if(index > sizeof(n)*8 )
		return -1;
		
	ind = n >> index;
	res = ind & 1;
	
	return res;
}
