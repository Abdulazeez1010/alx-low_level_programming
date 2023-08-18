#include "lists.h"

/**
 * free_dlistint - The function frees a dlistint_t list
 * @head : The head pointer
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *temp = head;

		head = head->next;
		free(temp);
	}
}
