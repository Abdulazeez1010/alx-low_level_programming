#include "lists.h"

/**
 * add_dnodeint - The function adds a new node at the beginning
 * of a dlistint_t list
 * @head : The head pointer
 * @n : The node to add
 * Return: Returns the address of the new element or NULL if failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->prev = NULL;
	temp->n = n;
	temp->next = *head;
	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;
	return (*head);
}
