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
	dlistint_t *temp, *tp;

	if (h == NULL)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;

	if (idx == 0)
	{
		temp->next = *h;
		if (*h != NULL)
			(*h)->prev = temp;
		*h = temp;
		return (temp);
	}

	tp = *h;
	while (idx != 1 && tp != NULL)
	{
		tp = tp->next;
		idx--;
	}
	if (tp == NULL)
	{
		free(temp);
		return (NULL);
	}
	/*temp2 = tp->next;*/
	temp->prev = tp;
	temp->next = tp->next;
	if (tp->next != NULL)
		tp->next->prev = temp;
	tp->next = temp;
	return (temp);
}
