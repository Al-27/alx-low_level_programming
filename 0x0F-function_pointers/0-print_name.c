#include "function_pointers.h"
/**
 * print_name - desc
 * @name: param
 * @f: param
 *
 */
void print_name(char *name, void (*f)(char *))
{
	char *empty = "";
	
	if(f)
	{
		if(name)
		{
			f(name);
		}
		else
		{
			f(empty);
		}
	}
}
