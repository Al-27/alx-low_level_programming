#include "main.h"

/*
 * _strspn: func 
 * @s: char
 * @accept: char 
 * 
 * Return: int
 */
 
 unsigned int _strspn(char *s, char *accept)
 {
 	int count, i, j;
 	
 	count = i = j = 0;
 	while(*s){
 		i = 0;
 		
 		while(*accept){
 			j++;
 			
 			if(*accept++ == *s){
 				count++;
 				
				while(j--)
				 *accept--;
				 
				 i = 1;
				 break;
 			}
 		}
 		
 		if(!i)
 			break;
 			
 		*++s;
 	}
 	return count;
 }
