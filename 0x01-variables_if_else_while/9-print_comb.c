#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int i;
	i = (int)'0';
	while(i<='9')
	{
		
		putchar(i);
		i++;
		if(i>'9')
		 break;
		putchar(',');
		putchar(' ');
		
		
	}
	putchar(10);
	return (0);
}
