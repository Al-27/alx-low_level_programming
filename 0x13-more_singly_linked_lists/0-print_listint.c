#include "lists.h" 

/**
 * fprint_listintunc - desc
 * @h: param
 *
 * Return: type
 */
size_t print_listint(const listint_t *h)
{
	
	listint_t* tmp = h;
	int len;
	
	len = 0;
	while(tmp != null)
	{
		len++;
		printf("%d\n", tmp->n );
		tmp = tmp->next;
	}
	
	return len;	
}
