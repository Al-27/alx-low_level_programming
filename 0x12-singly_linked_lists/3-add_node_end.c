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
	int nullH;
	
	nullH = *head == NULL;
	
	if(!nullH)
	{
		if((*head)->next != NULL)
		{
			return add_node_end(&(*head)->next, str);		
		}
	}
	list_t *newl = malloc(sizeof(list_t));
	int empty;
	
	empty = str ? 0 : 1;  
	
	if(newl == NULL)
		return NULL;

	if(str)
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

