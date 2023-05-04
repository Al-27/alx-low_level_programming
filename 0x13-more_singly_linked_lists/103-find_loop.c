#include "lists.h" 
#define cList const listint_t
/**
 * find_listint_loop - desc
 * @head: param
 *
 * Return: type
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *cur = head, *next = null;
	
	while(cur)
	{  
		next = cur->next;  
		switch( exist_in_list(cur,head,null,null) )
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
				return next;
				break;
		}
		cur = next;
	}
	
	return null;
}

/**
 * exist_in_list - desc
 * @node: param
 * @head: param
 *
 * Return: type
 */
int exist_in_list(cList *node, cList *head, cList *cur, cList *next)
{
	cur = head, next = node->next;
	
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
