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
	
	if(_len(*head,null,0) == 1)
		return *head;
	else if(_len(*head,null,0) == 2)
	{
		cur->next = null, next->next = cur;
		(*head) = next;
	}
	
	cur = reverser(*head, null,null);
	
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
listint_t* reverser(listint_t *h, listint_t *ret,listint_t *head)
{
	
	if(h->next)
	{
		ret = reverser(h->next, null,null);
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
 * _len - desc
 * @h: param
 *
 * Return: type
 */
int _len(const listint_t *h, const listint_t *tmp,int len )
{
	tmp = h; 
		
	len = 0;
	while(tmp != null)
	{
		len++;
		tmp = tmp->next;
	}
	
	return len;	
}

