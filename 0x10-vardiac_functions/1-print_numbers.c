#include "variadic_functions.h" 
 
/** 
* print_numbers - desc  
* @separator: arg  
* @n: arg  
*  
* Return: type  
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list args;
	va_start(args,n);
	
	while(i)
	{
		if(i != (int)n && separator)
		{
			printf("%s",separator);
		}
		
		printf("%d",va_arg(args, int));
		i--;
	}
	printf("\n");
	va_end(args); 
}
