#include "variadic_functions.h" 
 
/** 
* print_strings - desc  
* @separator: arg  
* @n: arg  
*  
* Return: type  
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char* str = NULL;
	va_list args;
	
	va_start(args,n);
	
	while(i)
	{
		if(i != (int)n && separator)
		{
			printf("%s",separator);
		}
		str = va_arg(args, char*);
		printf("%s",str ? str : "(nil)" );
		i--;
	}
	printf("\n");
	va_end(args);  
}
