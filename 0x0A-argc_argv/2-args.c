#include <stdio.h>
/**
  * main - func
  * @argc: arg
  * @argv: arg
  *
  * Return: int
  */
int main(int argc, char *argv[])
{
	int i;
	
	i = 0;
	while(i < argc)
		printf("%s\n", argv[i++]);
	
	return 0;
}
