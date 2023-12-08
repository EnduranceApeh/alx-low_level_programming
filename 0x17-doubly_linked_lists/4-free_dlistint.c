#include "lists.h"
/**
 * free_dlistint - free list
 * @head: pointer to first node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	/* triverse through list to free */
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
