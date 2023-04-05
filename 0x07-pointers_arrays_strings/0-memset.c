#include "main.h"

/*
 * _memset: func 
 * @s: char
 * @b: char
 * @n: uint
 * 
 * Return: char*
 */
 
 char *_memset(char *s, char b, unsigned int n)
 {	 
	 while(n--)
	 {
	 	s[n] = b;
	 } 
	 return s;
 }
