#include "lists.h" 

/**
 * listint_len - desc
 * @h: param
 *
 * Return: type
 */
size_t listint_len(const listint_t *h)
{
	listint_t* tmp = h;
	int len;
	
	len = 0;
	while(tmp != null)
	{
		len++;
		tmp = tmp->next;
	}
	
	return len;	
}
