#include "main.h"

/**
 *_puts_recursion : func
 *@s : arg
 *
 */
 
 void _puts_recursion(char *s)
 {
 	if(*s != '\0'){
 		_putchar(*s);
 		_puts_recursion(++s);
 	}
 	else 
	 	_putchar(10);
	
 	return ; 	
 }
