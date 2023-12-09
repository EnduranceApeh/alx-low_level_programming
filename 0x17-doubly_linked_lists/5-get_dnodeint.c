#include "lists.h"
/**
 * *get_dnodeint_at_index - return the nth node of a list
 * @head: header pointer
 * @index: index to return
 * Return: return nth node or NULL if out index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int node_count;

	tmp = head;
	node_count = 0;
	while (tmp != NULL)
	{
		if (node_count == index)
		{
			return (tmp);
		}
		tmp = tmp->next;
		node_count++;
	}
	return (NULL);
}
