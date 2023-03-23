#include "main.h"
/**
 * print_times_table - This is a rand desci
 * @n: ....etc
 *
 */
void print_times_table(int n){
	
	int i, j, ones, tens, sum, MAX;
	
	MAX = n+1;
	if(n <= 15 && n >= 0)
		for(i=0; i < MAX; i++){
			
			_putchar('0'); 
			_putchar(','); 
			for(j = 0; j < MAX; j++){
				
				sum = i * j;
				
				ones = (sum % 10);
				tens = sum / 10  == 0 ?' ' : '0'+(sum)/10 ;
				_putchar(' '); 
				_putchar(tens); 
				_putchar(ones +'0'); 
				if(j == 9)
					_putchar('\n');
				else{
					_putchar(','); 
				} 
				
			}
			
		}	
	else
		_putchar('\n');	
	
} 
