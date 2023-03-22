#include "main.h"
/**
 * print_sign - Makes the sum of two numbers
 * @n: First operand
 *
 * Return: 1
 */
int print_sign(int n){
	int si;
	if(n>0){
		_putchar('+');
		si=1;
	}
	else if(n==0){
		_putchar('0');
		si=0;
	}
	else{
		_putchar('-');
		si=-1;
	}
	return si;
}
