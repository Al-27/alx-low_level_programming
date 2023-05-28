#include "variadic_functions.h"

/** 
* sum_them_all - desc  
* @n: arg  
*  
* Return: type  
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = (int)n;
	va_list args;
	
	if( n == 0)
		return 0;
	va_start(args,n);
	
	while(i)
	{
		sum += va_arg(args, int);
		i--;
	}
	
	va_end(args);
	return sum;
}
