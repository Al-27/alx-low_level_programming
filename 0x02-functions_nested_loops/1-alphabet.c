#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */ 
 
void print_alphabet(){
	
	int i,end;
	i ='a';
	end = '\n';
	while(1){
		
		if(i > 'z'){
			i = end;
		}
		_putchar((char)i);
		
		if(i==end)
			break;
		i++;		
	}
	
}

