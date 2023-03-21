#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int i,j,k;
	i = (int)'0';
	while(i<='9')
	{
		for(j = i+1; j < '9'+1;j++  ){ 
			for(k = j+1; k<'9'+1;k++){
			
				putchar(i);
				putchar(j);
				putchar(k);
				if(i<'7'){
					putchar(','); 
					putchar(' '); 
				}
			}
		}
		i++;
	}
	putchar(10);
	return (0);
}
