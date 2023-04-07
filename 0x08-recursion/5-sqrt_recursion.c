#include "main.h"

/**
  * _sqrt_recursion - func
  * @n: arg
  *
  * Return: int
  */
int _sqrt_recursion(int n)
{
	if(n == 1)
		return 1;
	else if(n <= 0)
		return -1;
	else	
		return GetSquareRoot(n,n-1);
}

/**
  * GetSquareRoot - func
  * @n: arg
  * @d: arg
  *
  * Return: int
  */
int GetSquareRoot(int n, int d)
{
	if(d*d == n)
		return d;
	else if(d < 1)
		return -1;
	else
		return GetSquareRoot(n,d-1);	
}

