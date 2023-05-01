#include "lists.h" 

/**
 * get_nodeint_at_index - desc
 * @head: param
 * @index: param
 *
 * Return: type
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int len;
	
	len = listint_len( head );
	
	if( (index+1) > (unsigned)len )
	{
		return null;
	}
	else
	{
		return get_node(head, index);
	}
	
	return null;
}
 
 /**
 * get_node - desc
 * @head: param
 * @index: param
 *
 * Return: type
 */
  listint_t *get_node(listint_t *head, unsigned int index)
 {
 	if(index > 0)
 	{
 		if(head->next == null)
 			return null;
 		else
 			return get_node(head->next, index-1);
 	}
 	else if( head != null && index == 0)
 	{
 		return head;
 	}
 	
 	return null;
 }
 
 
 /**
 * listint_len - desc
 * @h: param
 *
 * Return: type
 */
size_t listint_len(const listint_t *h)
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
