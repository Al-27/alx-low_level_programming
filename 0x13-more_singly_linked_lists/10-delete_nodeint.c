#include "lists.h" 

/**
 * delete_nodeint_at_index - desc
 * @head: param
 * @idx: param
 *
 * Return: type
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *cur, *next;
	int icur = idx; 
	
	if( !head )
	{
		return -1;
	}
	
	if( !(*head) )
	{
		return -1;
	}
	
	if( icur >= len(*head) || icur < 0)
	{
		return -1;
	}
	
	icur = idx - 1;
	cur = *head, next = null;
	
	if( idx == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		
		return 1;
	}
	
	while(icur > 0)
	{
		if( (*head)->next )
			*head = (*head)->next;
		--icur;
	}
	
	next = (*head)->next;
	(*head)->next = next->next;
	free(next);
	(*head) = cur;
	
	return 1;
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
