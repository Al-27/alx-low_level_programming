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
 	int i = 0;
 	
	 while(i<n)
	 {
	 	s[i] = b;
	 	i++;
	 } 
	 return s;
 }
