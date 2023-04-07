#include "main.h"

/**
  * is_prime_number - func
  * @n: arg
  *
  * Return: int
  */
int is_prime_number(int n)
{
	if(n < 2)
		return 0;
	else
		return GetPrime(n, n, 1);
}

/**
  * GetPrime - func
  * @n: arg
  * @d: arg
  * @c: arg
  *
  * Return: int
  */
int GetPrime(int n, int d, int c)
{
	if(d < 2)
		if(c == 2)
			return 1;
		else
			return 0;
	else
		if(n % d == 0)
			return GetPrime(n, d-1, ++c);
		else
			return GetPrime(n, d-1, c);
}
