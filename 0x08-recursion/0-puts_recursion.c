#include "main.h"

/**
  * _puts_recursion - function desc
  * @s : arg
  *
  */
 
 void _puts_recursion(char *s)
 {
 	if(*s)
	{
 		_putchar(*s);
 		_puts_recursion(++s);
 	}
 	else 
	 	_putchar(10);
	
 	return ; 	
 }
