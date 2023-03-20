#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int i;
	i = (int)'a';
	while(i<='z')
	{
		if(i=='e'||i=='q'){
			i++;
			continue;
		}
		
		putchar(i);
		i++;
		
	}
	putchar(10);
	return (0);
}
