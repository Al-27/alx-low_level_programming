#include "main.h"

/**
 * largest_number - largest of 3 numbers
 * @a: 1sr int
 * @b: 2nd int
 * @c: 3rd int
 * Return: largest
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
