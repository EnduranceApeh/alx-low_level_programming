#include "lists.h"
/**
 * free_listint2 - a fucntion that free a list
 * @head: pointer to header of list
 * Return:
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			tmp = *head;
			*head = tmp->next;
			free(tmp);
		}
	}
}
