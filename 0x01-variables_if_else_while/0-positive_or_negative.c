#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(lastD >= 0)
	{
		printf("%d is %s\n", n, n == 0 ? "zero" : "positive");		
	}
	else
	{
		printf("%d is negative\n", n);
	}	
	return (0);
}
