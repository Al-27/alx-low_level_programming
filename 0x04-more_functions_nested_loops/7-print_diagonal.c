#include "main.h"
/**
 * print_diagonal - This is a rand desci
 * @n: int
 *
 */
void print_diagonal(int n){
	int c, i, j;
	j = i = n+1;
	while(n>0){
		i = i-n;
		while(i>0){
		
			c = i == 1 ? '\\' : ' ';
			_putchar(c);
			i--;
		}
		i=j;
		n--;
	_putchar(10);
		
	}
	
	
	if(n < 0)
		_putchar(10);
	
}
