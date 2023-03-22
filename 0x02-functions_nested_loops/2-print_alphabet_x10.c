#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */ 
 
void print_alphabet_x10(){
	
	int i,j,end;
	i ='a';
	j=0;
	end = '\n';
	while(1){
		if(j>=10)
			break;
		j++;
		if(i > 'z'){
			i = end;
		}
		_putchar((char)i);
		
		if(i==end)
			break;
		i++;		
	}
	
}
