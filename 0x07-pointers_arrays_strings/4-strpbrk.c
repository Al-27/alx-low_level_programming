#include "main.h"

/*
 * _strpbrk: func 
 * @s: char
 * @accept: char 
 * 
 * Return: char
 */
 

char *_strpbrk(char *s, char *accept)
{
	int j;
	
	j = 0;
 	while(*s){
 		while(*accept){
 			j++;
 			
 			if(*accept++ == *s){				 
				 return s;
 			}
 		}
		while(j--)
		 *accept--;
		 
 		*++s;
 	}
 	return NULL;
 }
