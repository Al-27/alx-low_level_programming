#include "main.h"
/**
 * jack_bauer - This is a random desci
 * 
 */
void jack_bauer(){
 
	int h1, h2, m1, m2; /*h1h2:m1m2*/
	h1=h2=m1=m2='0';
	while(1){
		putchar(h1);
		putchar(h2);
		putchar(':');
		putchar(m1);
		putchar(m2);
		putchar('\n');
		
		if(h1=='2'&&h2=='3'&&m1=='5'&&m2=='9')
			break;
		
		
		m2++;
		if(m2>'9'){
			m1++;
			if(m1>'5'){
				h2++;
				if(h2>'9'){
					h1++;
					h2='0';
				}
				m1='0';
			}
			
			m2='0';
		}
		
	}
	
}
