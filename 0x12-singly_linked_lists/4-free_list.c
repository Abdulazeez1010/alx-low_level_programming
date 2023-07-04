#include "lists.h"

/**
 * free_list - The function frees a list_t list
 * @head: The head
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *next = head->next;

		free(head->str);
		free(head);
		head = next;
	}
}
