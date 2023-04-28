#include "lists.h"
/**
 * list_len - desc
 * @h: param
 *
 * Return: type
 */
size_t list_len(const list_t *h)
{
	size_t length;
	const list_t *p = h;
	
	length = 0;
	if(h == NULL)
		return 0;
	
	while(p)
	{
		p = p->next;
		length++;
	}
	
	return length;	
}

