#include "main.h"
/**
 * print_diagonal - This is a rand desci
 * @size: int
 *
 */
void print_square(int size){
	int i,j;
	j = i = size;
	if(size <= 0)
		_putchar(10);
	while(size>0){
		i = j;
		while(i>0){
			_putchar('#');
			i--;
		} 
		size--;
	_putchar(10);
		
	}
	
	
	
}
