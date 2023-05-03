#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list and sets head to NULL
 * @head : The head
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	*head = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
