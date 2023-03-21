#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int i;
	int j;
	i = (int)'0';
	while(i<='9')
	{
		for(j = i+1; j < '9'+1;j++  ){ 
			putchar(i);
			putchar(j);
			if(i<'8'){
				putchar(','); 
				putchar(' '); 
			}
		}
		i++;
	}
	putchar(10);
	return (0);
}
