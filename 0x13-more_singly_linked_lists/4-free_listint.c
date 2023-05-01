#include "lists.h" 

/**
 * free_listint - desc
 * @head: param
 *
 * Return: type
 */
void free_listint(listint_t *head)
{
	if(head != null)
	{
		if(head->next != null)
			{
				free_listint(head->next);
			}
			free(head);
	}
	
}

