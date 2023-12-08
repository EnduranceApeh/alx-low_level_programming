#include "lists.h"
/**
 * add_dnodeint_end - add new node to the end of list
 * @head: pointer to the head pointer
 * @n: integer
 * Return: address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tale;
	/* Create new node */
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = NULL;
		if (*head == NULL)
		{
			new_node->prev = NULL;
			*head = new_node;
		}
		/* Triverse to the end of list */
		else
		{
			tale = *head;
			while (tale->next != NULL)
			{
				tale = tale->next;
			}
			tale->next = new_node;
			new_node->prev = tale;
		}
	}
	return (new_node);
}
