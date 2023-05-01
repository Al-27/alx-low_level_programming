#include "lists.h" 

/**
 * free_listint2 - desc
 * @head: param
 *
 * Return: type
 */
void free_listint2(listint_t **head)
{
	if(head != null)
	{
		if(*head != null)
		{
			if((*head)->next != null)
				{
					free_listint2(&(*head)->next);
				}
				free(*head);
		}
		*head = null;
	}
}

