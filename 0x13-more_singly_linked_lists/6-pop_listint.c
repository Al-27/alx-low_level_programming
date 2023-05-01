#include "lists.h" 

/**
 * pop_listint - desc
 * @head: param
 *
 * Return: type
 */
int pop_listint(listint_t **head)
{
	listint_t *next;
	int pop_n, len;
	
	len = listint_len(*head);
	
	switch(len)
	{
		case 0:
			return 0;
		case 1:
			pop_n = (*head)->n;
			free(*head);
			return pop_n; 
		default:
			next = (*head)->next;
			pop_n = (*head)->n;
			free(*head);
			*head = next;
			break;
	}
	
	return pop_n;
	
}

/**
 * listint_len - desc
 * @h: param
 *
 * Return: type
 */
size_t listint_len(const listint_t *h)
{
	listint_t* tmp = h;
	int len;
	
	len = 0;
	while(tmp != null)
	{
		len++;
		tmp = tmp->next;
	}
	
	return len;	
}
