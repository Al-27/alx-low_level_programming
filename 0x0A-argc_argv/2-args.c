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
	while(argc--)
		printf("%s", argv[argc]);
	
	return 0;
}
