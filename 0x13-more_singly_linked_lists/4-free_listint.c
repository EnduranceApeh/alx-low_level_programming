#include "lists.h"
/**
 * free_listint - function that frees a list
 * @head: pointer to ther header pointer
 * @Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
