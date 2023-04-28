#include "lists.h"
/**
 * free_list - desc
 * @head: param
 *
 */
void free_list(list_t *head)
{
	if(head != NULL)
	{		
		if(head->next != NULL)
		{
			free_list(head->next);
		}
		
		free(head);
		
	}
}

