#include "lists.h"
/**
 * add_dnodeint - add new node at beginning
 * @head: pointer to the header pointer
 * @n: integer
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* create new node */
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	/* Add node to the beginning of list */
	else
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = *head;
		if (*head != NULL)
		{
			(*head)->prev = new_node;
		}
		*head = new_node;
	}
	return (new_node);
}
