#include "main.h"

/*
 * _strchr: func 
 * @s: char
 * @c: char
 * 
 * Return: char*
 */
 
 char *_strchr(char *s, char c)
 {
 	while(*s){
 		if(*s++ == c)
 			return s;
 	}
 	return NULL;
 }
