#include "lists.h" 

/**
 * add_nodeint - desc
 * @head: param
 * @n: param
 *
 * Return: type
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *cur = *head , *new_el = malloc(sizeof(listint_t));
	
	if(new_el != null)
	{
		if(*head == null)
		{
			new_el->n = n;
			new_el->next = null;
			(*head) = new_el;
		}
		else
		{
			
			new_el->n = n;
			new_el->next = cur;
			*head = new_el;
			
		}
	}	
	
	return new_el;
}

