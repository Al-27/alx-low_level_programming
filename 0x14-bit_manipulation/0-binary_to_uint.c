#include "main.h" 
 
/** 
* binary_to_uint - desc  
* @b: arg  
*  
* Return: type  
*/

unsigned int binary_to_uint(const char *b)
{
	const char* pb;
	int i = 0, sum = 0;
	
	if(!b)
	{
		return 0;		
	} 
	
	for(pb = b; *pb; pb++)
	{
		if(*pb < '0' || *pb > '1')
			return 0;
	}
	
	--pb;
	for(; pb != b; pb--)
	{
			sum += (*pb - '0') * _pow(2,i);
			i++;
		
	}
	sum += (*pb - '0') * _pow(2,i);
	
	return sum;
}

/** 
* pow - desc  
* @b: base
* @p: power 
*  
* Return: type  
*/
int _pow(int b, int p)
{
	int sum = 1;
	if(p == 0)
		return 1;
	for(;p>0;p--)
	{
		sum *= b;
	}
	
	return sum;
}
