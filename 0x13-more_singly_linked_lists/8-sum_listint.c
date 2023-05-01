#include "lists.h" 

/**
 * sum_listint - desc
 * @head: param
 *
 * Return: type
 */
int sum_listint(listint_t *head)
{
	int sum;
	sum = 0;
	
	if(head == null)
		return 0;
	else if(head->next == null)
		return head->n;
	else
	{
		if(head->next != null)
		{
			sum = head->n;
			return sum + sum_listint(head->next);
		}
	}
	return 0;
}
