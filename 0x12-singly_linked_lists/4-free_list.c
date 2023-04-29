#include "lists.h"

/**
 * free_list - The function frees a list_t list
 * @head : The head
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	if (head == NULL)
		return;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
