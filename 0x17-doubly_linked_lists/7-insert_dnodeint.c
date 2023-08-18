#include "lists.h"

/**
 * insert_dnodeint_at_index - The function inserts a new node
 * at a given position
 * @h : The head pointer
 * @idx : The index to insert node
 * @n : The new node
 * Return: Returns the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *temp2, *tp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;

	tp = *h;
	while (idx != 1 && tp != NULL)
	{
		tp = tp->next;
		idx--;
	}
	temp2 = tp->next;
	tp->next = temp;
	temp2->prev = temp;
	temp->prev = tp;
	temp->next = temp2;
	return (*h);

}
