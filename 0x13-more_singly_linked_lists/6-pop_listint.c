#include "lists.h"
/**
 * pop_listint - function that delete head node of list
 * @head: pointer to head of node
 * Return: return the head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data_n = 0;

	if (head == NULL)
	{
		return (0);
	}
	tmp = *head;
	data_n = tmp->n;

	*head = tmp->next;
	free(tmp);
	return (data_n);
}
