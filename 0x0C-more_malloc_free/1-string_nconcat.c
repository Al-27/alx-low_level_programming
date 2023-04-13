#include "main.h"
/*
 *  - func
 * @ : uInt
 *
 * Return: pointer
 */
 char *string_nconcat(char *s1, char *s2, unsigned int n)
 {
 	char* concated;
	unsigned int size1 = len(s1);
	unsigned int size2 = len(s2);
	
	if(!s1 && !s2){
		concated = malloc(1);
		concated = "";
		return concated;
	}

 	if(!s1)
	{
		if(n >= size2)
		{
			concated = malloc(size2+1);
			concated = s2;
		}
		else
		{
			concated = malloc(n+1);
			concated[n] = '\0';
			while(n--)
			{
				concated[n] = s2[n];
			}
		}
			
 	}
 	else if(!s2 || n == 0)
	{
		concated = malloc(size1+1);
		concated = s1;
 	}
 	else
 	{
 		if(n >= size2)
		{
			concated = malloc(size2+size1+1);
			while(*s1 != '\0')*concated++ = *s1++;
			while(*s2)*concated++ = *s2++;
			*concated = *s2;
			while(size1--)concated--;
			while(size2--)concated--;
		}
		else
		{
			int tmp = n;
			concated = malloc(size1+n+1);
			concated[n+size1] = '\0';
			while(*s1 != '\0')*concated++ = *s1++;
			while(n--) *concated++ = *s2++;
			while(size1--)concated--;
			while(tmp--)concated--;
		}
 	}
 	
 	
 	return concated; 	
 }
 /*
 * len - func
 * @s : str
 *
 * Return: int
 */
int len(char *s)
{
	unsigned int n;
	
	if(s == NULL)
		return -1;
	
	n = 0;
	if(*s)
	{
		n = len(s+1) + 1 ;
	}
	
	return n;
}
