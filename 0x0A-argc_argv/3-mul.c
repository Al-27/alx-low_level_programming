#include <stdio.h>
#include <stdlib.h>
/**
  * main - func
  * @argc: arg
  * @argv: arg
  *
  * Return: int
  */
int main(int argc, char *argv[])
{
	int sum;
	sum = 1;
	
	if(argc == 3)
		sum = atoi( argv[argc-1] ) * atoi( argv[argc-2] );
	else
	{
		printf("Error\n");	
		return 1;	
	}
			
	printf("%d\n", sum);
		
	return 0;
}
