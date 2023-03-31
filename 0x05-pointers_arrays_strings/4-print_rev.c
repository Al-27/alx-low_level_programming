#include "main.h" 
/**
 * _strlen - This is a rand desci
 * @s: arg1
 */
void print_rev(char *s)
{
 	int i;
 	i = 0;
 	while(s[i]!='\0'){
 		i++;
 	}
 	--i;
 	while(i>=0){
 		_putchar(s[i]);
 		i--;
 	}
 	_putchar(10);
}
