#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of lis
 * @head: pointer to the head of the list
 * @index: index of the node to return
 * Return: the nth node or NULL if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;

	while (head != NULL)
	{
		if (j == index)
		{
			return (head);
		}
		head = head->next;
		j++;
	}
	return (NULL);
}
