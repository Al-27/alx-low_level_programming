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
	
	i = argc;
	while((i - argc--) < i)
		printf("%s\n", argv[argc]);
	return 0;
}
