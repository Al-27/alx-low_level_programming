#include "main.h"
/**
 * times_table - This is a rand desci
 *
 */
void times_table(){
	
	int i, j, ones, tens, sum;
	
	for(i=0; i < 10; i++){
		
		_putchar('0'); 
		_putchar(','); 
		for(j = 1; j < 10; j++){
			
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
		
	
} 
