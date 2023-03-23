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
		
		putchar('0'); 
		putchar(','); 
		for(j = 0; j < MAX; j++){
			
			sum = i * j;
			
			ones = (sum % 10);
			tens = sum / 10  == 0 ?' ' : '0'+(sum)/10 ;
			hund = sum / 100  == 0 ?' ' : '0'+(sum)/100 ;
			if(hund >= '1'){
				tens = (sum % 100 - ones)/10 + '0'; 
			}
			putchar(' '); 
			putchar(hund); 
			putchar(tens); 
			putchar(ones +'0'); 
			if(j == n)
				putchar('\n');
			else{
				putchar(','); 
			} 
			
		}
		
	}	
		
	
} 
