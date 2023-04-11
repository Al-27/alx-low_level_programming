#include <stdio.h>
#include <stdlib.h>
/**
  * main - func
  * @argc: arg
  * @argv: arg
  *
  * Return: int
  */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int sum;
	
	sum = 0;
	while(argc-- && argc > 1){
		if(*argv[argc] != '0' && atoi(argv[argc]) == 0){
			printf("Error\n");
			return 1;
		}
		sum += atoi(argv[argc]);
	}
	
	printf("%d\n", sum);
		
	return 0;
}
