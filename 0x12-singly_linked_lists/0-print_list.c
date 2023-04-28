#include "lists.h"
/**
 * print_list - desc
 * @h: param
 *
 * Return: size_t
 */
size_t print_list(const list_t *h){
	size_t length;
	const list_t *p = h;
	
	length = 0;
	if(h == NULL)
		return 0;
	
	while(p)
	{
		printf("[%d] %s\n", p->len, p->str?p->str:"(nil)");
		p = p->next;
		length++;
	}
	
	return length;	
}

