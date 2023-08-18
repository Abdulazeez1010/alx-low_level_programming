#include "lists.h"

/**
 * add_dnodeint_end - The function adds a new node at the end
 * of a dlistint_t list
 * @head : The head pointer
 * Return: Returns the address of the new element or NULL if failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *tp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return NULL;
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	tp = *head;
	while (tp->next != NULL)
	{
		tp = tp->next;
	}
	tp->next = temp;
	temp->prev = tp;
	return (*head);
}
