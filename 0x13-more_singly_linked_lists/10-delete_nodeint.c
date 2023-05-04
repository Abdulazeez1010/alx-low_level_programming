#include "lists.h"

/**
 * delete_nodeint_at_index - The function deletes the node at index index
 * of a listint_t linked list
 * @head : The head
 * @index : The index of the node that should be deleted
 * Return: Returns 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = *head;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	else
	{
		while (current != NULL && index != 0)
		{
			previous = current;
			current = current->next;
			index--;
		}
		if (current == NULL)
			return (-1);
		previous->next = current->next;
		free(current);
		current = NULL;
	}
	return (1);
}
