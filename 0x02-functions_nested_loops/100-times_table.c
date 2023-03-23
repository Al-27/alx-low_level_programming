#include "main.h"
/**
 * print_times_table - This is a rand desci
 * @n: ....etc
 *
 */
void print_times_table(int n){
	
	int i, j, ones, tens, hund, sum, MAX;
	
	MAX = n+1;
	
	for(i=0; i < MAX; i++){
		
		_putchar('0'); 
		_putchar(','); 
		for(j = 1; j < MAX; j++){
			
			sum = i * j;
			
			ones = (sum % 10);
			tens = sum / 10  == 0 ?' ' : '0'+(sum)/10 ;
			hund = sum / 100  == 0 ?' ' : '0'+(sum)/100 ;
			if(hund >= '1'){
				tens = (sum % 100 - ones)/10 + '0'; 
			}
			_putchar(' '); 
			_putchar(hund); 
			_putchar(tens); 
			_putchar(ones +'0'); 
			if(j == n)
				_putchar('\n');
			else{
				_putchar(','); 
			} 
			
		}
		
	}	
		
	
} 
