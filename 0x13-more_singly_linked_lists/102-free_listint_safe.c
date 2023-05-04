#include "lists.h" 
#define cList const listint_t
/**
 * print_listint_safe - desc
 * @head: param
 *
 * Return: type
 */
size_t free_listint_safe( listint_t **head)
{
	int leng = free_list(*head,*head);
	*head = null;
	return leng;
}

/**
 * free_list - desc
 * @head: param
 * @next: param
 *
 * Return: type
 */
int free_list(listint_t *head,listint_t *cur)
{
	
	listint_t *next = null;
	int loop = 0;
	
	loop = exist_in_list(cur,head,null,null);
	 
	next = loop != -1 ? cur->next : null; 
	 if(loop == 1)
	 {
	 	cur->next = null;
	 	cur= null;  
	 	return 1;
	 }
	 else if(loop == 0)
	 {
	 	if(next != null)
	 	{
	 		return free_list(head, next) + 1;
	 	}
	 	else
	 	{
	 		 cur = null; 
	 		return 1;
	 	}
	 }
	 
	 return 0;
}

/**
 * exist_in_list - desc
 * @node: param
 * @head: param
 * @cur: param
 * @next: param
 *
 * Return: type
 */
int exist_in_list(cList *node, cList *head, cList *cur, cList *next)
{
	cur = head;
	
	while(cur)
	{
		next = node->next;
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
