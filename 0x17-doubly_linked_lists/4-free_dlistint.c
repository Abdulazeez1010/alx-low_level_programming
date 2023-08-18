#include "lists.h"

/**
 * free_dlistint - The function frees a dlistint_t list
 * @head: The head pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
