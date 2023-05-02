#include "lists.h" 

/**
 * insert_nodeint_at_index - desc
 * @head: param
 * @idx: param
 * @n: param
 *
 * Return: type
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cur, *next, *new_;
	int icur = idx; 
	
	if( !head )
	{
		return null;
	}
	
	if( !(*head) )
	{
		return null;
	}
	
	if( icur >= len(*head) || icur < 0)
	{
		return null;
	}
	
	icur = idx - 1;
	cur = *head, next = null, new_ = malloc( sizeof(listint_t) );
	
	if(!new_)
	{
		return null;
	}
	
	new_->n = n;
	
	if( idx == 0)
	{
		new_->next = cur;
		(*head) = new_;
		
		return new_;
	}
	
	while(icur > 0)
	{
		if( (*head)->next )
			*head = (*head)->next;
		--icur;
	}
	
	next = (*head)->next;
	(*head)->next = new_;
	new_->next = next;	
	(*head) = cur;
	
	return new_;
} 

 #define LEN
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
