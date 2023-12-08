#include "lists.h"
/**
 * free_dlistint - free list
 * @head: pointer to first node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	/* triverse through list to free */
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
