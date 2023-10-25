#include "lists.h"
/**
 * sum_listint - function that sum all data
 * @head: pointer to head of list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (head == NULL)
	{
		return (sum);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
