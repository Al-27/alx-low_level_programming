#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define null NULL
#include "3-op_functions.c"
#include "3-get_op_func.c"
/**
 * main - desc
 * @argc: int
 * @argv: char
 *
 * Return: Always 0.
 */
int main(int argc, char* argv[])
{
	int res;
	
	if(argc > 4 || argc < 4)
	{
   		printf("Error\n");
		return (98);
	}
	if(strstr("/*+-%",argv[2]) == null)
	{
   		printf("Error\n");
		return (99);
	}
	if(strstr("/*",argv[2]) && atoi(argv[3]) == 0)
	{
   		printf("Error\n");
		return (100);
	}
    res = (get_op_func(argv[2]))(atoi(argv[1]),atoi(argv[3]));
    printf("%d\n",res);
    return (0);
}
