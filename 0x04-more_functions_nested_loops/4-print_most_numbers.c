#include "main.h"
/**
 * print_most_numbers - This is a rand desci
 *
 */
void print_most_numbers(){
	int i = '0';
	while(1){
		if(i=='2'||i=='4')
			continue;
		_putchar(i);
		if(i=='\n')
			break;
		i++;
		if(i>'9')
			i = '\n';
		
	}
	
	
}
