#include "lists.h" 

/**
 * reverse_listint - desc
 * @head: param
 *
 * Return: type
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *cur; 
	
	if(!head)
		return null;
	if( !(*head) )
		return null; 
		
	cur = *head, next = (*head)->next;
	
	if(len(*head) == 1)
		return *head;
	else if(len(*head) == 2)
	{
		cur->next = null, next->next = cur;
		(*head) = next;
	}
	
	cur = reverser(*head);
	
	*head = cur->next;
	cur->next = null;
	
	
	return *head;
}


/**
 * reverser - desc
 * @h: param
 *
 * Return: type
 */
listint_t* reverser(listint_t *h)
{
	listint_t *ret, *head;
	
	if(h->next)
	{
		ret = reverser(h->next);
		head = ret->next;
		
		ret->next = h;
		h->next = head;
		
		
	}
	else
	{
		h->next = h;
		return h;
	}
	
	return h;
}



/**
 * len - desc
 * @h: param
 *
 * Return: type
 */
int len(const listint_t *h)
{
	const listint_t* tmp = h;
	int len;
	
	len = 0;
	while(tmp != null)
	{
		len++;
		tmp = tmp->next;
	}
	
	return len;	
}

