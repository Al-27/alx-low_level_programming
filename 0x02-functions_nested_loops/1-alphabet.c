#include <stdio.h>
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
		putchar((char)i);
		
		if(i==end)
			break;
		i++;		
	}
	
}

int main(void)
{
	print_alphabet();
	return (0);
}
