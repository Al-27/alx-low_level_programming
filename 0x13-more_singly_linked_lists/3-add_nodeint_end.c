#include "lists.h" 

/**
 * add_nodeint_end - desc
 * @head: param
 * @n: param
 *
 * Return: type
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	
	listint_t *cur = *head, *new_el = malloc(sizeof(listint_t))  , *next;
	int is_new, is_next, is_cur;
	
	is_new = new_el == null,
	is_cur = *head == null;
	
	if(is_new)
	{
		return null;
	}
	else
	{
		new_el->n = n;
		new_el->next = null;
		
		if(is_cur)
		{
			*head = new_el;
		}
		else
		{
			is_next = (*head)->next == null;
			while(!is_next)
			{
				(*head) = (*head)->next;
				is_next =  (*head)->next == null;
			}
			
			(*head)->next = new_el;
			*head = cur;
		}
		
	}
	
	return new_el;
}

