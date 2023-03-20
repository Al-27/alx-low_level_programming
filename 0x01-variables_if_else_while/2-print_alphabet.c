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
		i++;
	}
	putchar(10);
	return (0);
}

