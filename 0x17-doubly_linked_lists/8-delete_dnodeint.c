#include "lists.h"

/**
 * delete_dnodeint_at_index - The function deletes the node at
 * index of a dlistint_t linked list
 * @head : The head pointer
 * @index : The index to delete at
 * Return: Returns 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp2;

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (index != 0 && temp != NULL)
	{
		temp = temp->next;
		index--;
	}
	if (temp == NULL)
		return (-1);
	temp2 = temp->prev;
	temp2->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp2;
	free(temp);
	return (1);
}
