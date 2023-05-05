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
 * @cur: param
 *
 * Return: type
 */
int free_list(listint_t *head,listint_t *cur)
{
	
	listint_t *next = null;
	int loop = 0, res = 0;
	
	loop = exist_in_list(cur,head,null,null);
	 
	next = loop != -1 ? cur->next : null; 
	 if(loop == 1)
	 {
	 	cur->next = null;
	 	free(cur); 
	 	return 1;
	 }
	 else if(loop == 0)
	 {
	 	if(next != null)
	 	{
	 		res = free_list(head, next) + 1;
	 		free(cur);
	 		return res;
	 	}
	 	else
	 	{
	 		 free(cur); 
	 		return 1;
	 	}
	 }
	 
	 return 0;
}


