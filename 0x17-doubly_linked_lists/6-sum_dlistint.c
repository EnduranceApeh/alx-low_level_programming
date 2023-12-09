#include "lists.h"
/**
 * sum_dlistint - return sum of data of a linked list
 * @head: head pointer
 * Return: sum of data or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum;

	tmp = head;
	sum = 0;
	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (tmp != NULL)
		{
			sum = sum + tmp->n;
			tmp = tmp->next;
		}
	}
	return (sum);
}
