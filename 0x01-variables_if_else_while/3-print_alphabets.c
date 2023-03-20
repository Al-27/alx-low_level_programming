#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int i;
	i = (int)'a';
	while(i<='z')
	{
		putchar(i);
		if(i=='z')
			i='A'-1;
		else if(i=='Z')
			i='z';
		i++;
		
	}
	putchar(10);
	return (0);
}
