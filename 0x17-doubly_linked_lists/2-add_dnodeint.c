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
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	temp->prev = NULL;
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (*head);
}
