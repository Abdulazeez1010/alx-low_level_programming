#include "lists.h"

/**
 * pop_listint - The function deletes the head node of a listint_t linked list
 * @head : The head
 * Return: Returns head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n;

	if (*head == NULL)
		return (0);
	if (!temp)
		return (0);
	n = temp->n;
	*head = (*head)->next;
	free(temp);
	temp = NULL;
	return (n);
}

