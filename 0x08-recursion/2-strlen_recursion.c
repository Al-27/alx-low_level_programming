#include "main.h"

/**
  * _strlen_recursion:  function desc
  * @s: arg
  *
  * Return: int
  */
  
int _strlen_recursion(char *s)
{
	int n;
	
	n = 0;
	if(*s)
	{
		n = _strlen_recursion(++s) + 1 ;
	}
	
	return n;
}
