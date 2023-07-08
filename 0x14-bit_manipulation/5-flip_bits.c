#include "main.h" 
 
/** 
* flip_bits - desc  
* @n: arg  
* @m: arg  
*  
* Return: type  
*/
unsigned int flip_bits(ulInt n, ulInt m)
{
	unsigned int flips = 0;
	int i = sizeof(ulInt)*8 - 1;
	
	for(;i >= 0; i--)
	{
		if( (n>>i & 1) != (m>>i & 1) )
			flips++;
	}
	
	return flips;
}
