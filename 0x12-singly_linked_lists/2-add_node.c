#include "lists.h"
/**
 * add_node - desc
 * @head: param
 * @str: param
 *
 * Return: list_t*
 */ 
list_t *add_node(list_t **head, const char *str)
{
	list_t *cur, *next, *newl = malloc(sizeof(list_t));
	
	cur = *head;
	if((*head) != NULL )
		next = (*head)->next;
	
	if(newl != NULL)
	{
		newl->str = NULL;
		newl->len = 0;
		if(str)
		{
			newl->str = strdup(str);
			newl->len = str_len(str);
		}
		
		if(*head != NULL) 
			cur->next = next;
		newl->next = cur;
		*head = newl;
	}
	else
		return NULL;
	
	return newl;	
}

/**
 * str_len - desc
 * @s: param
 *
 * Return: int
 */
int str_len(const char *s)
{
	const char *c;
	int len;
	
	c = s;
	len = 0;
	if(!s)
	{
		return 0;
	}
	while(*c)
	{
		len++;
		c++;
	}
	
	return len;
}
