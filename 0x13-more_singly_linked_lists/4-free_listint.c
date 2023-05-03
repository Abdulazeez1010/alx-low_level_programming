#include "lists.h"

/**
 * free_listint - The function frees a listint_t list
 * @head : The head
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	if (head == NULL)
		return;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
