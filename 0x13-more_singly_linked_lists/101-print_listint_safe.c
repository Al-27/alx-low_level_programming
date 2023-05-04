#include "lists.h"
#define cList const listint_t
/**
 * print_listint_safe - desc
 * @head: param
 *
 * Return: type
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *cur = head, *next = null;
	int leng = 0, loop = 0;
	printf("[%p] %i\n",(void*)cur,cur->n);
	
	while(cur)
	{ 
		leng++;
	
		next = cur->next;
		loop = exist_in_list(cur,head);
		switch(loop)
		{
			case -1:
				if(next)
				{
					exit(98);
				}
				break;
			case 0:
				break;
			case 1:
				printf("-> [%p] %i\n",(void*)next,next->n);
				break;
		}
		if(loop == 1)
		{
			break;
		}
		cur = next;
	}
	
	return leng;
}

/**
 * exist_in_list - desc
 * @node: param
 * @head: param
 *
 * Return: type
 */
int exist_in_list(cList *node, cList *head)
{
	const listint_t *cur = head, *next = node->next;
	
	while(cur)
	{
		if( cur == next )
		{
			return 1;
		}
		else if( cur == node)
		{
			return 0;
		}
		cur = cur->next;
	}
	return -1;
}
