#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
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
	if(strstr("/*+-%",argv[2]) == NULL || srlen(argv[2]) != 1)
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
