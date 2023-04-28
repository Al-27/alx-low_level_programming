#include "lists.h"
/**
 * add_node_end - desc
 * @head: param
 * @str: param
 *
 * Return: list_t*
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int nullH, empty;
	list_t *newl = NULL;
	
	nullH = *head == NULL;
	
	if(!nullH)
	{
		if((*head)->next != NULL)
		{
			return add_node_end(&(*head)->next, str);		
		}
	}
	newl = malloc(sizeof(list_t));
	
	empty = str == NULL ? 1 : 0;  
	
	if(newl == NULL)
		return NULL;

	if(!empty)
	{
		newl->str = strdup(str);
		newl->len = str_len(str);
	}
	else
	{
		newl->str = NULL;
		newl->len = 0;
	}
	if(nullH)
	{
		(*head) = newl;
		newl->next = NULL; 
	}
	else
	{
		(*head)->next = newl;
		newl->next = NULL; 
	}
		
	
	return newl;
	
}
