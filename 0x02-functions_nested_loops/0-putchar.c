#include <stdio.h>
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int i = 0;
	char put[] = "_putchar\n";
	for(; i < (int)sizeof(put)-1 ; i++)
		putchar(put[i]);
	return (0);
}
