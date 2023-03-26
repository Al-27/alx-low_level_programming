#include "main.h"
/**
 * more_numbers - This is a rand desci
 *
 */
void more_numbers(){
	int i, n, j;
	i = j = 0, n = '0';
	while(i<10){
		while(j<15){ 
			
			n = j > 9 ? '1': n;
			_putchar(n);
			
			n++; 
			
			if(j>9)
				_putchar('0'+j%10);
			
			j++;
		
		}
		j = 0, n = '0';
		i++;
		_putchar(10);
	}
	
}
